#include <iostream>
using namespace std;
int main(){
    int a,b,ch;
    cout<<"Enter the value of number 1 :"<<endl;
    cin>>a;
    cout<<"Enter the value of number 2 :"<<endl;
    cin>>b;
    cout<<"Select the operation.\n1)Addition\n2)Substraction\n3)Multiplication\n4)Division"<<endl;
    cin>>ch;
    switch(ch){
        case 1:cout<<"Sum is :"<<a+b;break;
        case 2:cout<<"Substraction is :"<<a-b;break;
        case 3:cout<<"Multiplication is :"<<a*b;break;
        case 4:cout<<"Division is :"<<a/b;break;
        default:cout<<"Incorrect Choice";
    }
    return 0;
}