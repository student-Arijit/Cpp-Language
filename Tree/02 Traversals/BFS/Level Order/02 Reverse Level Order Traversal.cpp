// Reverse level order traversal.
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

void reverse_levelorder(TreeNode* root) {
    queue<TreeNode*> q;
    stack<TreeNode*> s;
    q.push(root);

    while (!q.empty()) {
        TreeNode* curr = q.front();
        q.pop();

        s.push(curr);
        if (curr->left != nullptr) q.push(curr->left);
        if (curr->right != nullptr) q.push(curr->right);
    }

    while (!s.empty()) {
        cout << s.top()->data << " ";
        s.pop();
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

    reverse_levelorder(root);

    return 0;
}
