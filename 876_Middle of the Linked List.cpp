#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* middleNode(ListNode* head) {
    ListNode *slow = head;
    ListNode *fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

ListNode* createList(vector<int>& vec) {
    if (vec.size() == 0) return NULL;
    ListNode* head = new ListNode(vec[0]);
    ListNode* current = head;
    for (int i = 1; i < vec.size(); i++) {
        current->next = new ListNode(vec[i]);
        current = current->next;
    }
    return head;
}

void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> vec = {10,20,30,40,50};

    ListNode* head = createList(vec);

    cout << "Original List: ";
    printList(head);

    ListNode* middle = middleNode(head);
    cout << "Middle Node Value: " << middle->val << endl;

    return 0;
}
