#include <iostream>
using namespace std;

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// Helper function to check symmetry
bool identical(TreeNode* temp1, TreeNode* temp2) {
    if (temp1 == nullptr || temp2 == nullptr) {
        return temp1 == temp2;
    }
    if (temp1->val != temp2->val) {
        return false;
    }

    bool left = identical(temp1->left, temp2->right);
    bool right = identical(temp1->right, temp2->left);

    return left && right;
}

// Main symmetry check
bool isSymmetric(TreeNode* root) {
    if (!root) return true;
    return identical(root->left, root->right);
}

// Optional: helper function to build a small test tree
TreeNode* buildTestTree() {
    // Example of a symmetric tree:
    //       1
    //      / \
    //     2   2
    //    / \ / \
    //   3  4 4  3

    TreeNode* leftSub = new TreeNode(2, new TreeNode(3), new TreeNode(4));
    TreeNode* rightSub = new TreeNode(2, new TreeNode(4), new TreeNode(3));
    TreeNode* root = new TreeNode(1, leftSub, rightSub);
    return root;
}

int main() {
    TreeNode* root = buildTestTree();

    if (isSymmetric(root)) {
        cout << "The tree is symmetric." << endl;
    } else {
        cout << "The tree is not symmetric." << endl;
    }

    return 0;
}
