// Count the number of leaf nodes.
#include <iostream>
using namespace std;

class TreeNode {
    public:
        int data;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

int countleafnode(TreeNode* root) {
    if (root == nullptr) return 0;
    if (root->left == nullptr || root->right == nullptr) return 1;
    return countleafnode(root->left) + countleafnode(root->right);
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

    cout << countleafnode(root);

    return 0;
}
