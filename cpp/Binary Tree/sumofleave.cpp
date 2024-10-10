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
int sumOfLeftLeaves(Node* root) {
       
        int sum=0;
    
        if (root == NULL) {
            return sum;
        }
 
        if( root->left==NULL &&  root->right==NULL ){
       
           sum+=root->data;

           

        }
       
sum+=sumOfLeftLeaves(root->left);
sum+=sumOfLeftLeaves(root->right);

 return sum;
        
      

 

        
    }

    Node* build(Node*& root) {
    int data;
    cout << "Enter data (-1 for no node): ";
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    root = new Node(data);

    cout << "Enter left data for " << data << ": ";
    root->left = build(root->left);

    cout << "Enter right data for " << data << ": ";
    root->right = build(root->right);

    return root;
}
int main(){
Node*root=NULL;
build(root);
int sum=sumOfLeftLeaves(root);
cout<<sum;


}