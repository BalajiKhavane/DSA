#include <iostream>
using namespace std;
int main(){
    int a=20;
    int* ptr= &a;
    int** ptr2= &ptr;

    /*      '*' Dereference operator
                    It will return the value which is present at the address.
    */  
    cout<<*ptr<<endl;        //20
    cout<<*(&a)<<endl;       //20

    cout<<*ptr2<<endl;       //value of ptr2
    cout<<ptr<<endl;         //address of ptr

    cout<<**ptr2<<endl;     //20
    cout<<*ptr<<endl;      //20

    return 0;
}