#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;
char helper(int len, int k){
    if(len == 1){
        return '0';
    }
    int half = len/2;
    int mid = half+1;
    if(k == mid){
        return '1';
    }else if(k < mid){
        return helper(half,k);
    }else{
        char ans =  helper(half,len+1-k);
        return (ans == '0')? '1':'0';
    }
}
char findKthBit(int n, int k) {
    int len = pow(2,n)-1;
    return helper(len,k);
}
int main(){
    int n,k;
    cout<<"Enter n and k :"<<endl;
    cin>>n>>k;
    cout<<findKthBit(n,k)<<endl;

    return 0;
}