#include<iostream>
#include <limits.h>
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




void summax(TreeNode*root,int sum,int &maxsum,int len,int &maxlen){
    if(root==NULL){
       

    

    if(len>maxlen){
        maxlen=len;
        maxsum=sum;
    }

    else if(len==maxlen){
        maxsum=max(sum,maxsum);
    }
    return;
    }
    sum=sum+root->data;

    summax(root->left,sum,maxsum,len+1,maxlen);
    summax(root->right,sum,maxsum,len+1,maxlen);

}


int sumofleongest(TreeNode*root){
    int len=0;
    int maxlen=0;
    int sum=0;
    int maxsum=INT_MIN;
    summax(root,sum,maxsum,len,maxlen);
    return maxsum;

}

TreeNode* build(TreeNode*& root) {
    int data;
    cout << "Enter data (-1 for no node): ";
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    root = new TreeNode(data);

    cout << "Enter left data for " << data << ": ";
    root->left = build(root->left);

    cout << "Enter right data for " << data << ": ";
    root->right = build(root->right);

    return root;
}
int main(){

    TreeNode*root=NULL;
    build(root);

    int m=sumofleongest(root);

    cout<<" Sum "<<m;

}