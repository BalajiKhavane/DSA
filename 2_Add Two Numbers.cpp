#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to add two numbers represented by linked lists
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* dummy = new ListNode(-1);
    ListNode* temp = dummy;
    int carry = 0;

    while(l1 != nullptr || l2 != nullptr || carry) {
        int sum = carry;
        if(l1) {
            sum += l1->val;
            l1 = l1->next;
        }
        if(l2) {
            sum += l2->val;
            l2 = l2->next;
        }

        carry = sum / 10;
        temp->next = new ListNode(sum % 10);
        temp = temp->next;
    }

    return dummy->next;
}

// Helper function to create a linked list from an array
ListNode* createList(int arr[], int size) {
    ListNode* dummy = new ListNode(-1);
    ListNode* temp = dummy;
    for(int i = 0; i < size; i++) {
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }
    return dummy->next;
}

// Helper function to print a linked list
void printList(ListNode* head) {
    while(head != nullptr) {
        cout << head->val;
        if(head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// Main function
int main() {
    int arr1[] = {2, 4, 3};  // represents the number 342
    int arr2[] = {5, 6, 4};  // represents the number 465

    ListNode* l1 = createList(arr1, 3);
    ListNode* l2 = createList(arr2, 3);

    cout << "Input List 1: ";
    printList(l1);

    cout << "Input List 2: ";
    printList(l2);

    ListNode* result = addTwoNumbers(l1, l2);

    cout << "Result List: ";
    printList(result);

    return 0;
}
