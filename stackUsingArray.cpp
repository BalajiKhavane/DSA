#include <iostream>
using namespace std;
int top=-1,arr[5];

void push(){
    int el;
    cout<<"Enter the element :"<<endl;
    cin>>el;
    top++;
    if(top==4){
        cout<<"Stack overflow"<<endl;
    }else{
        arr[top]=el;
    }
}

void pop(){
    if(top==-1){
        cout<<"Stack underflow"<<endl;
    }else{
        cout<<arr[top]<<" is deleted."<<endl;
        top--;
    }
}

void tos(){
    if(top==-1){
        cout<<"Stack is Empty"<<endl;
    }else{
        cout<<"Top of stack is : "<<arr[top]<<endl;
    }
}

void traverse(){
    if(top==-1){
        cout<<"Stack is Empty"<<endl;
    }else{
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<"\t";
        }cout<<endl;
    }
}

int main(){
    int ch;
    do{
        cout<<"Enter the choice \n1.Push\n2.Pop\n3.tos\n4.triverse\n5.Exit"<<endl;
        cin>>ch;
        switch(ch){
            case 1:push();break;
            case 2:pop();break;
            case 3:tos();break;
            case 4:traverse();break;
            case 5:cout<<"Exit"<<endl;break;
            default:cout<<"Incorrect choice"<<endl;
        }
    }while(ch != 5);
    
    return 0;
}