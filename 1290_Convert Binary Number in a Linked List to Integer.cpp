#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int getDecimalValue(ListNode* head) {
    string str = "";
    ListNode* temp = head;
    while(temp != NULL){
        str += to_string(temp->val); 
        temp = temp->next;
    }

    reverse(str.begin(), str.end());

    int inc = 1, ans = 0;
    for(auto i : str){
        if(i == '1'){
            ans += inc;
        }
        inc *= 2;
    }

    return ans;
}

int main() {
    // Create linked list: 1 -> 0 -> 1
    ListNode* head = new ListNode(1);
    head->next = new ListNode(0);
    head->next->next = new ListNode(1);

    int decimalValue = getDecimalValue(head);
    cout << "Decimal value of the binary linked list: " << decimalValue << endl;

    // Free memory
    delete head->next->next;
    delete head->next;
    delete head;

    return 0;
}
