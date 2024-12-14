#include <iostream>
using namespace std;
int addDigits(int num) {
    if(num < 10) return num;
    else if(num%9 == 0) return 9;
    else return num%9;
}
int main(){
    int n = 38;
    cout<<addDigits(n)<<endl;
    n = 27;
    cout<<addDigits(n)<<endl;
    n = 0;
    cout<<addDigits(n)<<endl;

    return 0;
}