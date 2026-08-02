#include <iostream>
using namespace std;

class TreeNode {
    public:
        int data;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

void inorder(TreeNode* root) {
    if (root == nullptr) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main(void) {
    TreeNode* root = new TreeNode(10);

    root->left = new TreeNode(20);
    root->right = new TreeNode(30);
    
    root->left->left = new TreeNode(40);
    root->left->right = new TreeNode(50);

    inorder(root);

    return 0;
}
