#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to delete the node (assuming it is not the tail)
void deleteNode(ListNode* node) {
    if(node == NULL || node->next == NULL) return;
    node->val = node->next->val;
    node->next = node->next->next;
}

// Function to print linked list
void printLL(ListNode* head){
    while(head != NULL){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Function to create linked list from vector
ListNode* createLinkedList(const vector<int>& values, ListNode*& nodeToDelete){
    if(values.empty()) return NULL;
    
    ListNode* head = new ListNode(values[0]);
    ListNode* current = head;
    
    for(size_t i = 1; i < values.size(); ++i){
        current->next = new ListNode(values[i]);
        current = current->next;

        // Assume we want to delete the node with value 5
        if(values[i] == 5){
            nodeToDelete = current;
        }
    }
    return head;
}

int main(){
    vector<int> values = {4, 5, 1, 9};
    ListNode* nodeToDelete = NULL;

    ListNode* head = createLinkedList(values, nodeToDelete);

    cout << "Original List: ";
    printLL(head);

    if(nodeToDelete){
        deleteNode(nodeToDelete);
        cout << "After deleting node with value 5: ";
        printLL(head);
    } else {
        cout << "Node to delete not found." << endl;
    }

    return 0;
}
