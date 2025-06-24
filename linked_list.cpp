// Linked List
#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    Node *head;
    Node *tail;
public:
    List(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int val){
        Node *newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){
        Node *newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void insert(int val, int loc){
        if(loc < 0){
            cout<<"Invalid Location"<<endl;
        }
        if(loc == 0){
            push_front(val);
        }
        Node * temp = head;
        for(int i=0;i<loc-1;i++){
            temp = temp->next;
            if(temp == NULL){
                cout<<"Invalid Location"<<endl;
            }
        }
        Node *newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void pop_front(){
        if(head == NULL){
            cout<<"Linked List is empty."<<endl;
        }else{
            Node *temp = head;
            head = temp->next;
            temp->next = NULL;
            cout<<temp->data<<" is deleted."<<endl;
            delete temp;
        }
    }

    void pop_back(){
        if(head == NULL){
            cout<<"Linked List is empty."<<endl;
            return;
        }else{
            Node *temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            temp->next = NULL;
            cout<<tail->data<<" is deleted."<<endl;
            delete tail;
            tail = temp;
        }
    }

    void deleteAtLocation(int data, int loc){
        if(head == NULL){
            cout<<"Linked List is empty."<<endl;
        }
        if(loc < 0){
            cout<<"Invalid Location"<<endl;
        }
        if(loc == 0){
            pop_front();
        }
        Node *temp = head;
        for(int i=0;i<loc-1;i++){
            temp = temp->next;
            if(temp == NULL){
                cout<<"Invalid Location"<<endl;
            }
        }
        Node *nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;
        nodeToDelete->next = NULL;
        cout<<nodeToDelete->data<<" is deleted."<<endl;
        delete nodeToDelete;
    }

    void triverse(){
        if(head == NULL){
            cout<<"Linked List is empty."<<endl;
        }else{
            Node *temp = head;
            while(temp != NULL){
                cout<<temp->data<<"->";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }
    }
};

int main(){
    List ll;
    ll.push_front(50);
    ll.push_front(30);
    ll.push_front(40);
    ll.triverse();
    
    ll.pop_front();
    ll.pop_front();

    ll.push_back(60);
    ll.push_back(70);
    ll.push_back(80);

    ll.pop_back();
    ll.pop_back();

    ll.triverse();

    ll.insert(70,2);
    ll.insert(55,1);
    ll.insert(65,3);

    ll.deleteAtLocation(65,3);

    ll.triverse();

    return 0;
}