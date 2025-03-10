#include<iostream>
using namespace std;


class Node{
    public:

    Node*left;
    Node*right;
    int data;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;

    }

};



Node*creationtree(Node*root){
    cout<<"enter data "<<" ";

    int data;
    cin>>data;


    root=new Node(data);



    if(data==-1){
        return NULL;
    }

    cout<<"enter left data "<<data<<endl;

    root->left=creationtree(root->left);


    cout<<"enter right data "<<data<<endl;
 root->right=creationtree(root->right);


 return root;

}

pair<bool,int>fastsum(Node*root){
    if(root==NULL){
        pair<bool,int> p=make_pair(true,0);
        return p;

    }

    if(root->left==NULL || root->right){
        pair<bool,int> p=make_pair(true,0);
        return p;
    }



    pair<bool,int>leftans=fastsum(root->left);
   pair<bool,int>rightans=fastsum(root->left);




   bool leftsumtree=leftans.first;
    bool rightsumtree=leftans.first;


    bool cond=root->data==leftans.second+rightans.second;


pair<bool,int>ans;

    if( leftsumtree && rightsumtree && cond){
    ans.first=true;
    ans.second=root->data;
    }


return ans;

}


bool isum(Node*root){
    return fastsum(root).first;
}
int main(){

    Node*root=NULL;

    root=creationtree(root);


if(isum(root)){
    cout<<"correct "<<endl;
}

else{
    cout<<" not correct "<<endl;
}

}