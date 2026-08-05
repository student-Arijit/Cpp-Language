// Print all leaf nodes of a binary tree.
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class TreeNode {
    public:
        int data;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

void leafnode(TreeNode* root) {
    if (root == nullptr) return;

    leafnode(root->left);
    if (root->left == nullptr && root->right == nullptr) { 
        cout << root->data << " ";
        return;
    }
    leafnode(root->right);
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

    leafnode(root);

    return 0;
}
