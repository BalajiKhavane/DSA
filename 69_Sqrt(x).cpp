#include <iostream>
#include <cmath>
using namespace std;
int mySqrt(int x) {
    if(x <= 1) return x;
    for(long i=1;i<=x;i++){
        if(i*i == x){
            return i;
        }
        if(i*i >= x){
            return i-1;
        }
    }
    return x;
}
int main(){
    int x;
    cout<<"Enter a number :"<<endl;
    cin>>x;
    cout<<mySqrt(x)<<endl;

    return 0;
}