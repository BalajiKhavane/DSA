#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to get the intersection node
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode* a = headA;
    ListNode* b = headB;
    while (a != b) {
        a = a != NULL ? a->next : headB;
        b = b != NULL ? b->next : headA;
    }
    return a;
}

int main() {
    // Shared part (intersection)
    ListNode* intersect = new ListNode(8);
    intersect->next = new ListNode(10);

    // List A: 4 -> 1 -> 8 -> 10
    ListNode* headA = new ListNode(4);
    headA->next = new ListNode(1);
    headA->next->next = intersect;

    // List B: 5 -> 6 -> 1 -> 8 -> 10
    ListNode* headB = new ListNode(5);
    headB->next = new ListNode(6);
    headB->next->next = new ListNode(1);
    headB->next->next->next = intersect;

    // Find intersection
    ListNode* result = getIntersectionNode(headA, headB);

    // Output
    if (result) {
        cout << "Intersection at node with value: " << result->val << endl;
    } else {
        cout << "No intersection found." << endl;
    }

    return 0;
}
