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


Node*buildTree(Node* &root){
    int data;
    cout<<"enter data";
    cin>>data;

    root=new Node(data);
    if(data==-1){
        return NULL;
    }

    cout<<"enter left data "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"enter right data "<<endl;
    root->right=buildTree(root->right);
    return root;
}

int height(Node*root){
    if(root==NULL){
        return 0;
    }
   int lefth= height(root->left);
  
   int righth= height(root->right);
   int ans=max(lefth,righth)+1;
   return ans;

}
int main(){
Node*root=NULL;
buildTree(root);

int h=height(root);
cout<<"height "<<h<<" ";
}