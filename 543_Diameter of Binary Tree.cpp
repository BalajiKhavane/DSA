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

int calHeight(TreeNode* root){
    if(root == NULL){
        return 0;
    }
    return 1 + max(calHeight(root->left), calHeight(root->right));
}

int diameterOfBinaryTree(TreeNode* root) {
    if(root == NULL) return 0;
    int leftDiameter = diameterOfBinaryTree(root->left);
    int rightDiameter = diameterOfBinaryTree(root->right);
    int currDiameter = calHeight(root->left) + calHeight(root->right);

    return max(currDiameter, max(leftDiameter, rightDiameter));
}

int main() {
    /*
           1
          / \
         2   3
        / \     
       4   5    
    */

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    int diameter = diameterOfBinaryTree(root);
    cout << "Diameter of the Binary Tree: " << diameter << endl;

    // Clean up memory (not required in short programs but good practice)
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
