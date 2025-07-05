#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeKLists(vector<ListNode*>& lists) {
    vector<int> vec;
    for (int i = 0; i < lists.size(); i++) {
        ListNode *temp = lists[i];
        while (temp != NULL) {
            vec.push_back(temp->val);
            temp = temp->next;
        }
    }
    if (vec.empty()) return NULL;

    sort(vec.begin(), vec.end());

    ListNode* head = new ListNode(vec[0]);
    ListNode* curr = head;
    for (int i = 1; i < vec.size(); i++) {
        curr->next = new ListNode(vec[i]);
        curr = curr->next;
    }

    return head;
}

// Utility function to create a linked list from vector
ListNode* createList(const vector<int>& vals) {
    if (vals.empty()) return nullptr;
    ListNode* head = new ListNode(vals[0]);
    ListNode* curr = head;
    for (int i = 1; i < vals.size(); i++) {
        curr->next = new ListNode(vals[i]);
        curr = curr->next;
    }
    return head;
}

// Utility function to print linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Create example lists
    vector<int> v1 = {1, 4, 5};
    vector<int> v2 = {1, 3, 4};
    vector<int> v3 = {2, 6};

    ListNode* l1 = createList(v1);
    ListNode* l2 = createList(v2);
    ListNode* l3 = createList(v3);

    vector<ListNode*> lists = {l1, l2, l3};

    // Merge lists
    ListNode* merged = mergeKLists(lists);

    // Print merged list
    cout << "Merged Linked List: ";
    printList(merged);

    return 0;
}
