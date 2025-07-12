#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void Traversal(TreeNode* root, vector<int>& ans) {
    if (root == NULL) return;
    ans.push_back(root->val);
    Traversal(root->left, ans);
    Traversal(root->right, ans);
    return;
}

vector<int> preorderTraversal(TreeNode* root) {
    vector<int> ans;
    Traversal(root, ans);
    return ans;
}

int main() {
    // Creating the following binary tree:
    //       1
    //        \
    //         2
    //        /
    //       3

    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    vector<int> result = preorderTraversal(root);

    cout << "Preorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    // Free the allocated memory
    delete root->right->left;
    delete root->right;
    delete root;

    return 0;
}
