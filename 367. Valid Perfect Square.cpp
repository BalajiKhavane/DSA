#include <iostream>
using namespace std;
bool isPerfectSquare(int num) {
    long i = 1;
    while(i*i <= num){
        if(i*i == num) return true;
        i++;
    }
    return false;
}
int main(){
    int num;
    cout<<"Enter a number :"<<endl;
    cin>>num;
    cout<<isPerfectSquare(num)<<endl;
    return 0;
}