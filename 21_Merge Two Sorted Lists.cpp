#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct ListNode2 {
    int val;
    ListNode2 *next;
    ListNode2() : val(0), next(nullptr) {}
    ListNode2(int x) : val(x), next(nullptr) {}
    ListNode2(int x, ListNode2 *next) : val(x), next(next) {}
};

void display(ListNode* head){
    ListNode* temp = head;
    while(temp != NULL){
        cout<<temp->val<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode dummy;
        ListNode* current = &dummy;
        while (l1 && l2) {
            if (l1->val < l2->val) {
                current->next = l1;  
                l1 = l1->next;     
            } else {
                current->next = l2; 
                l2 = l2->next;     
            }
            current = current->next; 
        }
        current->next = l1 ? l1 : l2;
        return dummy.next;  
    }
}
int main(){
    ListNode* list1 = NULL; 
    ListNode* list2 = NULL; 

    display(list1);
    display(list2);

    return 0;
}