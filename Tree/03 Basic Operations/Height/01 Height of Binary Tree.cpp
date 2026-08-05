// Find the height (max depth) of a binary tree.
#include <iostream>
using namespace std;

class TreeNode {
    public:
        int data;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

int depth(TreeNode* root) {
    if (root == nullptr) return 0;
    int left = depth(root->left);
    int right = depth(root->right);
    return 1 + max(depth(root->left), depth(root->right));
}

int main(void) {
    /*
            1
          /   \
         2     3
        / \   / 
       4   5 6  
      /
     7
    */

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->left->left->left = new TreeNode(7);

    cout << depth(root);

    return 0;
}
