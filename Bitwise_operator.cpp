#include <iostream>
using namespace std;
int main(){
    int a=6,b=8;                 //0110 & 1000 
    //Bitwise and(&)
    cout<<(a & b)<<endl;          //0000 = 0

    //Bitwise OR(|)              0110 | 1000
    cout<<(a | b)<<endl;         //1110 = 14

    //Bitwise XOR(|)            0110 ^ 1000
    cout<<(a ^ b)<<endl;        //1110 = 14

    //Bitwise Left Shift(<<)       0110 << 2
    cout<<(a << 2)<<endl;           // 011000 = 24

    //Bitwise Right Shift(>>)       0110 >> 2
    cout<<(a >> 2)<<endl;           // 0001 = 1

    a=6,b=10;
    cout<<(a & b)<<endl;  //2
    cout<<(a | b)<<endl;  //14
    cout<<(a ^ b)<<endl;  //12
    return 0;
}