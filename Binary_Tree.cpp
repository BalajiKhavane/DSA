#include <iostream>
#include <vector>
using namespace std;

// Tree Node
class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

// Build Tree
Node* buildTree(vector<int>& preorder, int& idx) {
    if (idx >= preorder.size() || preorder[idx] == -1) {
        idx++;
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    idx++;
    root->left = buildTree(preorder, idx);
    root->right = buildTree(preorder, idx);

    return root;
}

//Preorder
void printPreorder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}

//Inorder
void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

//Postorder
void postorder(Node* root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    int idx = 0;
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preorder, idx);

    cout<<"Preorder : ";
    printPreorder(root);
    cout<<endl;

    cout<<"Inorder : ";
    inorder(root);
    cout<<endl;

    cout<<"Postorder : ";
    postorder(root);
    cout<<endl;

    return 0;
}