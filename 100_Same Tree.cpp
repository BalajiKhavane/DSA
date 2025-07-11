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

bool isSameTree(TreeNode* p, TreeNode* q) {
    if(p == NULL && q == NULL){
        return true;
    }
    if(p == NULL || q == NULL){
        return false;
    }
    if(p->val != q->val){
        return false;
    } 

    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

int main() {
    // Tree 1
    TreeNode* tree1 = new TreeNode(1);
    tree1->left = new TreeNode(2);
    tree1->right = new TreeNode(3);

    // Tree 2
    TreeNode* tree2 = new TreeNode(1);
    tree2->left = new TreeNode(2);
    tree2->right = new TreeNode(3);

    if(isSameTree(tree1, tree2)) {
        cout << "Both trees are the same." << endl;
    } else {
        cout << "Trees are different." << endl;
    }

    // Clean up memory (optional for small test, but good practice)
    delete tree1->left;
    delete tree1->right;
    delete tree1;
    delete tree2->left;
    delete tree2->right;
    delete tree2;

    return 0;
}
