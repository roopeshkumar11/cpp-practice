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

Node*takeBSt(Node*root,int &val){
    if(root==NULL){
        root=new Node(val);
        return root;

    }

    if(root->data>val){
        root->left=takeBSt(root->left,val);
    }

    if(root->data<val){
        root->right=takeBSt(root->right,val);
    }
    return root;
}


void inBST(Node*root){
    int data;
    cin>>data;
    while(data!=-1){
        takeBSt(root,data);
        cin>>data;
    }
}


Node*prec(Node*root,int key){

    Node*preceder=NULL;

    while(root!=NULL){
        if(key>root->data){
            preceder=root;
            root=root->right;
        }

        else{
            root=root->left;
        }
    }
    return preceder;
}
int main(){
    Node*root=NULL;
cout<<"BST ";
    inBST(root);

    int s=70;

   Node*result=prec(root,s);
   cout<<"precedecer "<<result->data;



}