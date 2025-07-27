#include <iostream>
#include <vector>
using namespace std;
class ListNode{
public :
    int val;
    ListNode* left;
    ListNode* right;

    ListNode(int data){
        val = data;
        left = right = NULL;
    }
};

class BinarySearchTree{
public :
    ListNode* root;
    BinarySearchTree(){
        root = NULL;
    }

    ListNode* create(ListNode* root, int data){
        if(root == NULL){
            return new ListNode(data);
        }else if(data < root->val){
            root->left = create(root->left,data);
        }else if(data > root->val){
            root->right = create(root->right,data);
        }else{
            cout<<"This is duplicate Node."<<endl;
        }

        return root;
    }

    void inorder(ListNode* root){
        if(root == NULL){
            return;
        }

        inorder(root->left);
        cout<<root->val<<" ";
        inorder(root->right);
    }
};
int main(){
    BinarySearchTree tree;
    vector<int> nums{10,24,12,74,64,80};

    ListNode* root = NULL;
    for(int i : nums){
        root = tree.create(root,i);
    }

    tree.inorder(root);
    cout<<endl;
    
    return 0;
}