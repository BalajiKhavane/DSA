#include <iostream>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
bool isIdentical(TreeNode* p, TreeNode* q){
    if(p == NULL or q == NULL){
        return p == q;
    }
    if(p->val != q->val) return false;
    bool l_side = isIdentical(p->left, q->left);
    bool r_side = isIdentical(p->right, q->right);

    return l_side && r_side;
}

bool isSubtree(TreeNode* root, TreeNode* subRoot) {
    if(root == NULL or subRoot == NULL){
        return root == subRoot;
    }
    
    if(root->val == subRoot->val && isIdentical(root,subRoot)){
        return true;
    }
    bool l_flag = isSubtree(root->left,subRoot);
    bool r_flag = isSubtree(root->right,subRoot);

    return l_flag or r_flag;
}
int main() {
    // Main tree
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(4);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(2);

    // Subtree
    TreeNode* subRoot = new TreeNode(4);
    subRoot->left = new TreeNode(1);
    subRoot->right = new TreeNode(2);

    cout << (isSubtree(root, subRoot) ? "True" : "False") << endl;

    return 0;
}
