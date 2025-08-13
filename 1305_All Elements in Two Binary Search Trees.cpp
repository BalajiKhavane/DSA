#include <iostream>
#include <vector>
#include <algorithm> // for sort
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void traverse(TreeNode* root, vector<int>& ans) {
    if (root == nullptr) return;
    ans.push_back(root->val);
    traverse(root->left, ans);
    traverse(root->right, ans);
}

vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
    vector<int> ans;
    traverse(root1, ans);
    traverse(root2, ans);
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    // Example tree 1
    TreeNode* root1 = new TreeNode(2);
    root1->left = new TreeNode(1);
    root1->right = new TreeNode(4);

    // Example tree 2
    TreeNode* root2 = new TreeNode(1);
    root2->left = new TreeNode(0);
    root2->right = new TreeNode(3);

    vector<int> result = getAllElements(root1, root2);

    cout << "Merged sorted elements: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    // Free allocated memory
    delete root1->left;
    delete root1->right;
    delete root1;
    delete root2->left;
    delete root2->right;
    delete root2;

    return 0;
}
