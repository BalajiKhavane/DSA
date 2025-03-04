#include <iostream>
#include <math.h>
using namespace std;
bool checkPowersOfThree(int n) {
    for(int i=14;i>=0;i--){
        int num = pow(3,i);
        if(num <= n){
            n -= num;
            if(n == 0){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter number :"<<endl;
    cin>>n;
    cout<<checkPowersOfThree(n)<<endl;

    return 0;
}