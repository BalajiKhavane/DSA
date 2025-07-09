#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Function to swap nodes in pairs
ListNode* swapPairs(ListNode* head) {
    if (head == NULL || head->next == NULL) return head;
    ListNode* temp = head;
    ListNode* Next = temp->next;

    temp->next = swapPairs(temp->next->next);
    Next->next = temp;

    return Next;
}

// Function to create linked list from user input
ListNode* createList() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    if (n == 0) return NULL;

    cout << "Enter values:\n";
    int val;
    cin >> val;
    ListNode* head = new ListNode(val);
    ListNode* curr = head;

    for (int i = 1; i < n; ++i) {
        cin >> val;
        curr->next = new ListNode(val);
        curr = curr->next;
    }

    return head;
}

// Function to print linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    ListNode* head = createList();

    cout << "Original list:\n";
    printList(head);

    head = swapPairs(head);

    cout << "List after swapping pairs:\n";
    printList(head);

    return 0;
}
