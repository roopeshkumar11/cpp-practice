#include<iostream>
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

Node* buildTree(Node* root){
    int data;
    cout<<"enter data";
    cin>>data;


if(data==-1){
    return NULL;
}    root=new Node(data);

    cout<<"enter left data " <<data<<endl;
    root->left=buildTree(root->left);

    cout<<"enter right data "<<data<<endl;
      root->right=buildTree(root->right);

      return root;
    
}

int  height(Node* root){
    if(root==NULL){
        return 0;

    }

  int left=height(root->left);
  int right= height(root->right);

  int ans=max(left,right)+1;

  return ans;
}


int diameter(Node* root){

    

    if(root==NULL){
        return 0;

    }


    int op1=diameter(root->left);
    int op2=diameter(root->right);
    int op3=height(root->left) + height(root->right)+1;

    int ans= max(op1, max(op2, op3));
    
    return ans;

}
int main(){
Node*root=NULL;

root=buildTree(root);

int ans=diameter(root);
cout<<"diamter "<<ans;

}