#include<iostream>
using namespace std;


class Tree{
    public:

    int val;
    Tree*left;
    Tree*right;
    Tree(int d){

    this->val=d;
    this->left=NULL;
    this->right=NULL;

    }

};

 pair<int,int>solve(Tree*root){
    if(root==NULL){
        pair<int,int>p=make_pair(0,0);
        return p;
    }
    pair<int,int>left=solve(root->left);
    pair<int,int>right=solve(root->right);

    pair<int,int>res;

    res.first=root->val+left.second+right.second;
    res.second=max(left.first,left.second)+max(right.first,right.second);

    return res;
 }

 Tree*build(Tree*root){
    int data;
    cout<<"enter data";

    cin>>data;

    root=new Tree(data);

    if(data==-1){
        return NULL;
    }

    cout<<"enter left data "<<data<<endl;
    root->left=build(root->left);

    cout<<"enter right data "<<data;

    root->right=build(root->right);
 }
int main(){

}