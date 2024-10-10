// #include<iostream>
// #include<vector>
// using namespace std;


// class Tree{
//     public:
//     int data;
//     Tree*left;
//     Tree*right;

//     Tree(int d){
//         this->data=d;
//         this->left=NULL;
//         this->right=NULL;
//     }

// };


// void traversalleft(Tree*root, vector<int>&ans){
//     if((root==NULL) || (root->left==NULL && root->right==NULL)){
//         return;
//     }

//   ans.push_back(root->data);
//     if(root->left){
//      traversalleft(root->left,ans);
//     }
//     else{
//          traversalleft(root->right,ans);
//     }

  
// }



// void traversalLeaf(Tree*root,vector<int>&ans){

//     if (root==NULL)
//     {
//         return;
//     }
    
//     if(root->left==NULL && root->right==NULL)
//     {
//        ans.push_back(root->data);
//     }

// traversalLeaf(root->left,ans);
// traversalLeaf(root->right,ans);
    
// }

// void traversalright(Tree*root, vector<int>&ans){
//     if((root==NULL) || (root->left==NULL && root->right==NULL)){
//         return;
//     }


//     if(root->right){
//      traversalright(root->right,ans);
//     }
//     else{
//          traversalright(root->left,ans);
//     }
//     ans.push_back(root->data);
// }









// vector<int> boundarylevel(Tree* root){

//     vector<int>ans;
//     if(root==NULL){
//         return ans;
//     }
//     ans.push_back(root->data);
//     traversalleft(root->left,ans);
//     traversalLeaf(root->left,ans);
//     traversalLeaf(root->right,ans);
//     traversalright(root->right,ans);

//     return ans;


// }


// Tree*build(Tree* &root){
//     int data;
//     cout<<"enter data";
//     cin>>data;

//     root=new Tree(data);

//     if(data==-1){
//         return NULL;
    
//     }

//     cout<<" enter left data "<<data<<endl;
//     root->left=build(root->left);

//      cout<<" enter right data "<<data<<endl;
//      root->right=build(root->right);



// }
// int main() {

//     Tree*root=NULL;
//     build(root);

//   vector<int> result = boundarylevel(root);
    
//     for (int val : result)
//         cout << val << " ";

// }

#include<iostream>
#include<vector>
using namespace std;

class Tree {
public:
    int data;
    Tree* left;
    Tree* right;

    Tree(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void traversalleft(Tree* root, vector<int>& ans) {
    if ((root == NULL) || (root->left == NULL && root->right == NULL)) {
        return;
    }

    ans.push_back(root->data);
    if (root->left) {
        traversalleft(root->left, ans);
    } else {
        traversalleft(root->right, ans);
    }
}

void traversalLeaf(Tree* root, vector<int>& ans) {
    if (root == NULL) {
        return;
    }

    if (root->left == NULL && root->right == NULL) {
        ans.push_back(root->data);
    }

    traversalLeaf(root->left, ans);
    traversalLeaf(root->right, ans);
}

void traversalright(Tree* root, vector<int>& ans) {
    if ((root == NULL) || (root->left == NULL && root->right == NULL)) {
        return;
    }

    if (root->right) {
        traversalright(root->right, ans);
    } else {
        traversalright(root->left, ans);
    }

    ans.push_back(root->data);  
}

vector<int> boundarylevel(Tree* root) {
    vector<int> ans;
    if (root == NULL) {
        return ans;
    }

    // Include root node in the boundary
    ans.push_back(root->data);

    // Traverse left boundary excluding leaf nodes
    traversalleft(root->left, ans);

    // Traverse leaf nodes
    traversalLeaf(root->left, ans);
    traversalLeaf(root->right, ans);

    // Traverse right boundary excluding leaf nodes
    traversalright(root->right, ans);

    return ans;
}

// Pass root by reference to ensure changes are reflected in main
Tree* build(Tree*& root) {
    int data;
    cout << "Enter data (-1 for no node): ";
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    root = new Tree(data);

    cout << "Enter left data for " << data << ": ";
    root->left = build(root->left);

    cout << "Enter right data for " << data << ": ";
    root->right = build(root->right);

    return root;
}

int main() {
    Tree* root = NULL;
    build(root);

    vector<int> result = boundarylevel(root);

    for (int val : result)
        cout << val << " ";

    return 0;
}
