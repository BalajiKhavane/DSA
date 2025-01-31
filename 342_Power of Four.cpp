#include <iostream>
using namespace std;
bool isPowerOfFour(int n) {
    if(n == 1){
        return true;
    }
    if(n%4 != 0 or n == 0){
        return false;
    }
    return isPowerOfFour(n/4);
}
int main(){
    int n;
    cout<<"Enter number :"<<endl;
    cin>>n;
    cout<<isPowerOfFour(n)<<endl;

    return 0;
}