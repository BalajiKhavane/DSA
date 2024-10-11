#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};          //Constant Pointers
    int a=15;

    //  1) Increment                
    int *ptr=&a;            //0x61fef4
    ptr++;                  //0x61fef4 + 4
    cout<<ptr<<endl;              //0x61fef8
    
    //  2) Decrement
    ptr--;                  //0x61fef8 - 4
    cout<<ptr<<endl;              //0x61fef4

    //  3) Add/Substract Number
    ptr= ptr + 2;                //0x61fef4 + (2*4)
    cout<<ptr<<endl;        //0x61fefc
    ptr -=3;                //0x61fefc + (3*4)
    cout<<ptr<<endl;        //0x61fef0

    int b=20;
    int *ptr2=&b;

    // Subtract ptr
    //cout<< ptr + ptr2;        //Not Possible

    cout<<ptr-ptr2<<endl;   

    //Compare
    cout<<(ptr==ptr2)<<endl;         

    return 0;
}