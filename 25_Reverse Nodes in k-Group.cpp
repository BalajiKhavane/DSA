#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Function to reverse k nodes in a group
ListNode* reverseKGroup(ListNode* head, int k) {
    int count = 0;
    ListNode* temp = head;

    // Check if there are at least k nodes left
    while (count < k) {
        if (temp == NULL) return head;
        temp = temp->next;
        count++;
    }

    // Reverse k nodes
    ListNode* newHead = reverseKGroup(temp, k);  // Recursive call for the next part
    count = 0;
    temp = head;
    while (count < k) {
        ListNode* Next = temp->next;
        temp->next = newHead;
        newHead = temp;
        temp = Next;
        count++;
    }

    return newHead;
}

// Helper function to print the linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Helper function to create a linked list from an array
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

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    ListNode* head = createList(arr, n);
    cout << "Original list: ";
    printList(head);

    head = reverseKGroup(head, k);

    cout << "Reversed in k-group: ";
    printList(head);

    return 0;
}
