#include <iostream>
using namespace std;
bool isUgly(int n) {
    if(n <= 0) return false; 
    while(n > 1){
        if(n%2 == 0){
            n /= 2;
        }else if(n%3 == 0){
            n /= 3;
        }else if(n%5 == 0){
            n /= 5;
        }else{
            return false;
        }
    }
    return true;
}
int main(){
    int n = 10;
    cout<<isUgly(n)<<endl;
    n = 14;
    cout<<isUgly(n)<<endl;
    n = 1;
    cout<<isUgly(n)<<endl;

    return 0;
}