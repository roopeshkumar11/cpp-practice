#include<iostream>
using namespace std;


class TreeNode{

    public:
    int data;
    TreeNode*left;
    TreeNode*right;

    TreeNode(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;

    }
};



TreeNode*createBST(TreeNode*root,int val){
    if(root==NULL){
        root=new TreeNode(val);
        return root;
    }

    if(val>root->data){
        root->right=createBST(root->right,val);

    }

    else{
          root->left=createBST(root->left,val);
    }
    return root;
}


void inputBst(TreeNode*&root){
int data;
cin>>data;
while (data!=-1)
{
    root= createBST(root,data);
   cin>>data;
}

}

// search bSt;
bool searchBst(TreeNode*root,int s){
    if(root==NULL){
        return false;
    }

if(root->data==s){
    return true;
}

if(s<root->data){

 return searchBst(root->right,s);
}
else{
      return searchBst(root->right,s);   
}

  
}



// min val of Bst
TreeNode*minval(TreeNode*root){
    TreeNode*temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }

    return temp;
}

//Max Value of BST;

TreeNode*maxval(TreeNode*root){
    TreeNode*temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }

    return temp;
}


// Deletetion of BST;


TreeNode*deleteBST(TreeNode*root,int dele){
    if(root==NULL){
        return NULL;
    }

    if(root->data==d){
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;

        }

       if(root->left!=NULL && root->right==NULL){
            TreeNode*temp=root->left;
            delete root;
            return temp;

        }
     if(root->left==NULL && root->right!=NULL){
            TreeNode*temp=root->right;
            delete root;
            return temp;

        }

        if(root->left!=NULL && root->right!=NULL){
            int mini=minval(root->left)->data;
            root->data=mini;
            root->right=deleteBST(root->right,mini);
            return root;
        }

    }
}
int main(){
TreeNode*root=NULL;


cout<<"BST : ";
inputBst(root);
int s=0;

if(searchBst(root,s)){
    cout<<"find : "<<endl;
}

else{
    cout<<"not find "<<endl;
}


cout<<" min value of BST: "<<minval(root)->data<<endl;
cout<<" max value of BST: "<<maxval(root)->data<<endl;
}