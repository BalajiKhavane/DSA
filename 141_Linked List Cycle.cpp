#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to detect cycle in the linked list
bool hasCycle(ListNode *head) {
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow) return true;
    }

    return false;
}

// Helper function to create a list without a cycle
ListNode* createList(int arr[], int n) {
    if (n == 0) return NULL;
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    for (int i = 1; i < n; i++) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}

// Helper function to create a cycle in the list at position 'pos'
void createCycle(ListNode* head, int pos) {
    if (pos == -1) return;
    ListNode* tail = head;
    ListNode* cycleNode = NULL;
    int idx = 0;
    while (tail->next != NULL) {
        if (idx == pos) cycleNode = tail;
        tail = tail->next;
        idx++;
    }
    tail->next = cycleNode;  // Create the cycle
}

int main() {
    int arr[] = {3, 2, 0, -4};
    int n = sizeof(arr)/sizeof(arr[0]);

    ListNode* head = createList(arr, n);
    createCycle(head, 1); // Creating a cycle connecting last node to node at position 1

    if (hasCycle(head)) {
        cout << "Cycle detected in the linked list." << endl;
    } else {
        cout << "No cycle in the linked list." << endl;
    }

    return 0;
}
