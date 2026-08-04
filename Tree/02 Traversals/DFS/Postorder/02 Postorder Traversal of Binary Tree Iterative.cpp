//Postorder traversal (iterative, using a stack).

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

class TreeNode {
    public:
        int data;
        TreeNode* left;
        TreeNode* right;
        TreeNode (int val) : data(val),  left(nullptr), right(nullptr) {}
};

void postorder(TreeNode* root) {
    stack<TreeNode*> s;
    vector<int> v;
    s.push(root);

    while (!s.empty()) {
        if (root == nullptr) return;

        TreeNode* curr = s.top();
        s.pop();

        v.push_back(curr->data);

        if (curr->left) s.push(curr->left);
        if (curr->right) s.push(curr->right);
    }

    reverse(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
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


    postorder(root);

    return 0;
}
