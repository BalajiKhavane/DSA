#include <iostream>
#include <vector>
using namespace std;

class ListNode {
public:
    int data;
    ListNode *next;

    ListNode(int val) {
        data = val;
        next = NULL;
    }
};

class LinkedList {
    ListNode *head;
public:
    LinkedList() {
        head = NULL;
    }

    // Insert at front (push_back actually behaves like push_front here)
    void push_back(int val) {
        ListNode *newNode = new ListNode(val);
        if (head == NULL) {
            head = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    // Print linked list
    void printLL() {
        ListNode *temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Get head of list
    ListNode* getHead() {
        return head;
    }

    // Create a cycle for testing
    void createCycle(int pos) {
        if (pos < 0) return;

        ListNode *temp = head;
        ListNode *cycleNode = NULL;
        int count = 0;
        while (temp->next != NULL) {
            if (count == pos) {
                cycleNode = temp;
            }
            temp = temp->next;
            count++;
        }
        // Connect the last node to the node at position 'pos'
        if (cycleNode != NULL) {
            temp->next = cycleNode;
        }
    }

    // Detect the start of the cycle
    ListNode* detectCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;

        bool hasCycle = false;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                hasCycle = true;
                break;
            }
        }

        if (!hasCycle) return NULL;

        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        return fast;
    }
};

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};

    LinkedList ll;
    for (int val : vec) {
        ll.push_back(val);  // Adds to front: list becomes 50 -> 40 -> 30 -> 20 -> 10
    }

    // Create a cycle at position 2 (0-indexed): node with value 30
    ll.createCycle(2);

    ListNode* head = ll.getHead();
    ListNode* cycleStart = ll.detectCycle(head);

    if (cycleStart) {
        cout << "Cycle detected at node with value: " << cycleStart->data << endl;
    } else {
        cout << "No cycle detected." << endl;
    }

    return 0;
}
