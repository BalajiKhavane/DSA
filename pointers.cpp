#include <iostream>
using namespace std;
int main(){
    int a=10;
    int* ptr= &a;       //pointer ptr stores the address of a.
    cout<<ptr<<endl;

    float price= 100.25;
    float* ptr1= &price;    //Initialize the pointer.
    cout<<ptr1<<endl;

    return 0;
}