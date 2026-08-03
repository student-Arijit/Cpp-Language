//Preorder traversal (iterative, using a stack).

#include <iostream>
#include <stack>
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

    stack<TreeNode*> s;
    s.push(root);

    while(!s.empty()) {
        TreeNode* curr = s.top();
        s.pop();

        cout << curr->data << " ";

        if (curr->right) s.push(curr->right);
        if (curr->left) s.push(curr->left);
    }
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
