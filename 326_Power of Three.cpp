#include <iostream>
using namespace std;
bool isPowerOfThree(int n) {
    return n > 0 && 1162261467 % n == 0;
}
int main(){
    int n;
    cout<<"Enter number :"<<endl;
    cin>>n;
    cout<<isPowerOfThree(n)<<endl;

    return 0;
}