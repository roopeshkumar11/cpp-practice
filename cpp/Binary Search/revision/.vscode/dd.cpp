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
int main(){
    Node*root=NULL;

    inputBST(root);

}