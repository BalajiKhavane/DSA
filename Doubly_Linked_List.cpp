#include <iostream>
using namespace std;
class Node{
public :
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class Doubly_LL{
    Node* head;
    Node* tail;
public :
    Doubly_LL(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void pop_front(){
        if(head == NULL){
            cout<<"Linked List is empty."<<endl;
            return;
        }else{
            Node* temp = head;
            head = head->next;
            if(head != NULL){
                head->prev = NULL;
            }
            temp->next = NULL;
            delete temp;
        }
    }

    void pop_back(){
        if(head == NULL){
            cout<<"Linked List is empty."<<endl;
            return;
        }else{
            Node* temp = tail;
            tail = tail->prev;
            if(tail != NULL){
                tail->next = NULL;
            }
            temp->prev = NULL;
            delete temp;
        }
    }

    void printLL(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<"<=>";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

};

int main(){
    Doubly_LL dll1;
    dll1.push_front(40);
    dll1.push_front(30);
    dll1.push_front(20);
    dll1.push_front(10);

    dll1.printLL();

    dll1.push_back(50);
    dll1.push_back(60);

    dll1.printLL();

    dll1.pop_front();
    dll1.pop_back();

    dll1.printLL();

    return 0;
}