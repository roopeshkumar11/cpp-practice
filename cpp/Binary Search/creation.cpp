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


Node*takeBST(Node*root,int data){
    if(root==NULL){
        root=new Node(data);
        return root;
    }

if(data>root->data){
    root->right=takeBST(root->right,data);
}

else{
     root->left=takeBST(root->left,data);
}
return root;

}


void InputBST(Node*&root){
    int data;
    cin>>data;
    while(data!=-1){
        root=takeBST(root,data);
        cin>>data;

    }
}

void Inoder(Node* &root){
    if(root==NULL){
        return;
    }

    Inoder(root->left);
    cout<<root->data<<" ";
    Inoder(root->right);
}
int main(){


    Node*root=NULL;
cout<<"enter data";
    InputBST(root);


cout<<"Inoder traversal  ";
    Inoder(root);

}