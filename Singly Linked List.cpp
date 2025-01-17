//Singly Linked List
#include <iostream>
#include <string>
using namespace std;
class Node{
    public:
    char data;
    Node* next;

    Node(char data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insert(Node* &head,char data){
    Node* new_node = new Node(data);
    new_node->next = head;
    head = new_node;
}

void insertAtEnd(Node* &head,char data){
    Node* new_node = new Node(data);
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->next = NULL;
}

void insertAtLoc(Node* &head, char data, int loc){
    Node* new_node = new Node(data);
    Node* temp = head;
    int i=0;
    while(temp != NULL && i <= loc-1){
        temp = temp->next;
        i++;
    }
    temp->next = new_node;
    new_node->next = temp->next;
}

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head = NULL;
    insert(head,'C');
    insert(head,'B');
    insert(head,'A');
    insertAtEnd(head,'E');
    insertAtLoc(head,'D',4);

    display(head);
    return 0;
}