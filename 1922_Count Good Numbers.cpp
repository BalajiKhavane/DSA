#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const long long mod = 1000000007;
long long power(long long n, long long expo, long long mod){
    long long ans = 1;
    while(expo > 0){
        if(expo%2 == 1){
            ans = (ans*n) % mod;
        }
        n = (n*n) % mod;
        expo /= 2;
    }
    return ans;
}

int countGoodNumbers(long long n) {
    long long even = (n+1)/2;
    long long odd = n/2;

    long long power_4 = power(5, even, mod);
    long long power_5 = power(4, odd, mod);

    return (power_4 * power_5) % mod;
}
int main(){
    long long n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    cout<<countGoodNumbers(n)<<endl;

    return 0;
}