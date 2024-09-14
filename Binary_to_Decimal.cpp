#include <iostream>
using namespace std;
int binaryToDecimal(int n){
    int pow=1,ans=0;
    while(n>0){
        int rem=n%2;
        ans += (rem * pow);
        pow *=2;
        n/=10;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter a Binary number :"<<endl;
    cin>>n;
    cout<<"Decimal number :"<<binaryToDecimal(n);
    return 0;
}