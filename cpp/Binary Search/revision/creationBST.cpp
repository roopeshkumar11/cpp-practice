#include<iostream>
#include<queue>
using namespace std;

class Node{

    public:
    int data;
    Node*left;
    Node*right;


    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

Node *insertBST(Node*root,int d){
    if(root==NULL){
        root=new Node(d);
        return root;
    }


    if(d>root->data){
        root->right=insertBST(root->right,d);
      
    }

    else{
          root->left=insertBST(root->left,d);
    }
    return root;
}
void takeinput(Node* &root){
 
    int data;
       cout<<"enter data ";
    cin>>data;
    

    while(data!=-1){
      root=insertBST(root,data);
        cin>>data;
    }
}




void leveordertraversal(Node*root){
    queue<Node*>q;

    q.push(root);
    q.push(NULL);


    while(!q.empty()){
        Node* temp=q.front();
         q.pop();
        

        if(temp==NULL){
            cout<<endl;

            if(!q.empty()){
                q.push(NULL);
            }
        }
else{

cout<<temp->data<<" ";
if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
}
    

    }
}

// find minimum value 

Node*minmumvalue(Node* root){
    Node*temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }

    return temp;
}

Node*maximumvalue(Node* root){
    Node*temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }

    return temp;
}

Node*deleteNodeBST(Node*root,int val){
    if(root==NULL){
        return NULL;
    }

    if(root->data==val){

        //delete on childe 

        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }

        if(root->left!=NULL && root->right==NULL){
            Node*temp=root->left;
            delete  root;
            return temp;

        }

        if(root->left==NULL && root->right!=NULL){
            Node*temp=root->right;
            delete  root;
            return temp;

        }

        if(root->left!=NULL && root->right!=NULL){
           
           int mini=minmumvalue(root->right)->data;
           root->data=mini;
           root->right=deleteNodeBST(root->right,mini);
           return root;
        }

        

    }

    else if(root->data>val){
        root->left=deleteNodeBST(root->left,val);
        return root;
    }
    else{
         root->right=deleteNodeBST(root->right,val);
        return root;
    }
   
}

int main(){
    Node*root=NULL;

    takeinput(root);

    cout<<"level order traversal ";
    leveordertraversal(root);



Node*maxi=minmumvalue(root);
cout<<"maximum value "<<maxi->data<<endl;
Node*mim=maximumvalue(root);
cout<<"minimumvalue "<<mim->data<<endl;



deleteNodeBST(root,90);

cout<<"after deletion level order traversal ";
    leveordertraversal(root);



}