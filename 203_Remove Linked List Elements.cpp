#include <iostream>
#include <vector>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(NULL) {}
    ListNode(int x) : val(x), next(NULL) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* createList(vector<int>& values){
    if(values.empty()) return NULL;
    ListNode* head = new ListNode(values[0]);
    ListNode* temp = head;
    for(int i=1;i<values.size();i++){
        temp->next = new ListNode(values[i]);
        temp = temp->next;
    }
    return head;
}

void printLL(ListNode* head){
    while(head != NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}

ListNode* removeElements(ListNode* head, int val) {
    while(head != NULL && head->val == val) head = head->next;
    ListNode *temp = head;
    while(temp != NULL){
        while(temp->next != NULL && temp->next->val == val){
            temp->next = temp->next->next;
        }
        temp = temp->next;
    }
    return head;
}
int main(){
    int val = 6;
    vector<int> values = {1,2,6,3,4,5,6};

    ListNode* head = createList(values);
    cout<<"Orignal List: ";
    printLL(head);
    
    head = removeElements(head, val);
    cout<<"Updated List: ";
    printLL(head);
    
    return 0;
}