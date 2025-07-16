#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Inorder Traversal
void inorder(TreeNode* root, vector<int>& ans) {
    if (root == NULL) return;
    inorder(root->left, ans);
    ans.push_back(root->val);
    inorder(root->right, ans);
}

vector<int> inorderTraversal(TreeNode* root) {
    vector<int> ans;
    inorder(root, ans);
    return ans;
}

int calHeight(TreeNode* root){
    if(root == NULL) return 0;
    return 1 + max(calHeight(root->left),calHeight(root->right));
}

int calSum(TreeNode* root,int sum){
    if(root == NULL) return 0;
    calSum(root->left,sum);
    calSum(root->right,sum);
    return root->val + calSum(root->left,sum) + calSum(root->right,sum);
}

int main() {
    // Manually building the tree with values: 4,2,6,5,7,1,3,9,8
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(6);

    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(7);

    root->right->left->left = new TreeNode(1);
    root->right->left->right = new TreeNode(3);

    root->right->left->right->right = new TreeNode(9);
    root->right->left->right->right->left = new TreeNode(8);

    // Get and print inorder traversal
    vector<int> result = inorderTraversal(root);
    cout << "Inorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    cout<<"The height of tree is: "<<calHeight(root)<<endl;
    cout<<"The Sum of Nodes is: "<<calSum(root,0)<<endl;

    return 0;
}
