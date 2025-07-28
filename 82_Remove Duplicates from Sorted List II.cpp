#include <iostream>
#include <map>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Function to remove all nodes that have duplicates
ListNode* deleteDuplicates(ListNode* head) {
    map<int, int> freq;

    ListNode* temp = head;
    while (temp != NULL) {
        freq[temp->val]++;
        temp = temp->next;
    }

    ListNode* newHead = new ListNode(-1);
    ListNode* curr = newHead;
    for (auto i : freq) {
        if (i.second == 1) {
            curr->next = new ListNode(i.first);
            curr = curr->next;
        }
    }

    return newHead->next;
}

// Helper function to create a linked list from a vector
ListNode* createList(const vector<int>& values) {
    if (values.empty()) return nullptr;
    ListNode* head = new ListNode(values[0]);
    ListNode* temp = head;
    for (int i = 1; i < values.size(); i++) {
        temp->next = new ListNode(values[i]);
        temp = temp->next;
    }
    return head;
}

// Helper function to print a linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> input = {1, 2, 3, 2, 4, 4, 5};  // Example list
    ListNode* head = createList(input);

    cout << "Original List: ";
    printList(head);

    ListNode* result = deleteDuplicates(head);

    cout << "List after removing duplicates: ";
    printList(result);

    return 0;
}
