#include<iostream>
#include<queue>
using namespace std;



class TreeNode{
    public:

    TreeNode*left;
    TreeNode*right;

    int data;


    TreeNode(int d){
        this->left=NULL;
        this->right=NULL;
        this->data=d;
    }

};

TreeNode*creationNode(TreeNode*root){
    

    cout<<"enter data "<<endl;

    int data;
    cin>>data;

    root=new TreeNode(data);


    if(data==-1){
        return NULL;
    }


    cout<<"enter left data :"<<data<<endl;
    root->left=creationNode(root->left);

    cout<<"enter right data "<<data<<endl;

    root->right=creationNode(root->right);



    return root;
}

void leveordertraversal(TreeNode*root){
    queue<TreeNode*>q;

    q.push(root);
    q.push(NULL);


    while(!q.empty()){
        TreeNode* temp=q.front();
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


void InorderTraversal(TreeNode*root){
    if(root==NULL){
        return ;
    }

   
    InorderTraversal(root->left);
     cout<<root->data<<" ";
       InorderTraversal(root->right);

}


void preorderTraversal(TreeNode*root){
    if(root==NULL){
        return ;
    }

    cout<<root->data<<" ";
    preorderTraversal(root->left);
       preorderTraversal(root->right);

}


void postorderTraversal(TreeNode*root){
    if(root==NULL){
        return ;
    }

   
    postorderTraversal(root->left);
       postorderTraversal(root->right);
        cout<<root->data<<" ";

}


int main(){

    TreeNode*root=NULL;


    root=creationNode(root);
    leveordertraversal(root);

    cout<<"Inorder travesral"<<endl;
    InorderTraversal(root);

cout<<"Preorder travesral"<<" ";
    preorderTraversal(root);

cout<<"Postorder travesral"<<" ";
    postorderTraversal(root);

}