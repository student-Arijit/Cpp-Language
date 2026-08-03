//Preorder traversal of a binary tree (recursive)

#include <iostream>
using namespace std;

class TreeNode {
    public:
        int data;
        TreeNode* left;
        TreeNode* right;
        TreeNode (int value) : data(value), left(nullptr), right(nullptr) {}
};

void preorder(TreeNode* root) {
    if (root == nullptr) return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main(void) {
    /*
            1
          /   \
         2     3
        / \   / \
       4   5 6   7
    */

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    preorder(root);

    return 0;
}
