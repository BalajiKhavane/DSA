#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;

    Node(int _val) : val(_val), prev(NULL), next(NULL), child(NULL) {}
};

Node* flatten(Node* head) {
    if (head == NULL) return NULL;

    Node* curr = head;
    while (curr != NULL) {
        Node* Next = NULL;

        if (curr->child != NULL) {
            Next = curr->next;
            curr->next = flatten(curr->child);
            if (curr->next != NULL)
                curr->next->prev = curr;
            curr->child = NULL;

            Node* temp = curr->next;
            while (temp->next != NULL) {
                temp = temp->next;
            }

            if (Next != NULL) {
                temp->next = Next;
                Next->prev = temp;
            }
        }
        curr = curr->next;
    }

    return head;
}

// Utility function to print flattened list
void printList(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    // Create nodes
    Node* head = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    Node* node5 = new Node(5);
    Node* node6 = new Node(6);
    Node* node7 = new Node(7);
    Node* node8 = new Node(8);

    // Setup main list: 1 - 2 - 3 - 4 - 5
    head->next = node2;
    node2->prev = head;

    node2->next = node3;
    node3->prev = node2;

    node3->next = node4;
    node4->prev = node3;

    node4->next = node5;
    node5->prev = node4;

    // Set child: 3 -> 6 - 7
    node3->child = node6;
    node6->next = node7;
    node7->prev = node6;

    // Set child: 7 -> 8
    node7->child = node8;

    // Flatten and print
    Node* flatHead = flatten(head);
    printList(flatHead);

    return 0;
}
