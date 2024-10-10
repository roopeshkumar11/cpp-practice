#include<iostream>
using namespace std;

class TreeNode {
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};


TreeNode* lowestCa(TreeNode* root, int n1, int n2) {
    if (root == NULL) {
        return NULL;
    }

    if (root->data == n1 || root->data == n2) {
        return root;
    }

    TreeNode* leftans = lowestCa(root->left, n1, n2);
    TreeNode* rightans = lowestCa(root->right, n1, n2);

    if (leftans != NULL && rightans != NULL) {
        return root;
    }

    return (leftans != NULL) ? leftans : rightans;
}

TreeNode* build(TreeNode* root) {
    int data;
    cout << "Enter data: ";
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    root = new TreeNode(data);

    cout << "Enter left data of " << data << endl;
    root->left = build(root->left);

    cout << "Enter right data of " << data << endl;
    root->right = build(root->right);

    return root;
}

int main() {
    TreeNode* root = NULL;


    root = build(root);

    int n1 = 2;
    int n2 = 3;

    TreeNode* ans = lowestCa(root, n1, n2);

    if (ans != NULL) {
        cout << "Lowest Common Ancestor: " << ans->data << endl;
    } else {
        cout << "No common ancestor found!" << endl;
    }

    return 0;
}
