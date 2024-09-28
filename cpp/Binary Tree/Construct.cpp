#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }


};

node*buildTree(node*root){
    cout<<"enter  data"<<endl;
    int data;

    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }

    cout<<"enter data inserting in left of "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data inserting in right of "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

void levelOrderTraveseral(node*root){
    queue <node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node*temp=q.front();
       
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


void Inorder(node* root){
    if(root==NULL){
        return;
    }

    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}


void Preorder(node* root){
    if(root==NULL){
        return;
    }

   
    cout<<root->data<<" ";
     Preorder(root->left);
    Preorder(root->right);
}

void Postorder(node* root){
    if(root==NULL){
        return;
    }

   

    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}


int main(){
node*root=NULL;
root=buildTree(root);
cout<<"Printing Level traversal  "<<endl;
levelOrderTraveseral(root);

cout<<"Printing inorder traversal  ";
Inorder(root);
cout<<endl;
cout<<"Printing Preorder traversal  ";
Preorder(root);

cout<<endl;
cout<<"Printing Postorder traversal ";
Postorder(root);
}
