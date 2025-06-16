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



Node*insertNode(Node*root,int data){
    if(root==NULL){
        root=new Node(data);

        return root;
    }



    if(data>root->data){
        root->right=insertNode(root->right,data);

    }

    else{
        root->left=insertNode(root->left,data);
    }

    return root;
}


void inputBST(Node *&root){
    int data;
    cout<<"enter Node";
    cin>>data;


    while(data!=-1){
        root=insertNode(root,data);
        cin>>data;
    }
}


void inordere(Node*root){
    if(root==NULL){
        return;
    }

    inordere(root->left);
    cout<<root->data<<" ";
    inordere(root->right);
}

void preorder(Node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    
}


void postorder(Node*root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    Node*root=NULL;

    inputBST(root);
    cout<<" inordere"<<endl;
    inordere(root);
    cout<<endl;

    cout<<"preordere"<<endl;
    preorder(root);
     cout<<endl;


     cout<<"postordere"<<endl;
     postorder(root);

}