#include <iostream>
using namespace std;

int countDigits(int num) {
    int count = 0, n = num;
    while(n > 0){
        if(num%(n%10) == 0) count++;
        n /= 10;
    }
    return count;
}
int main(){
    int num;
    cout<<"Enter the number :"<<endl;
    cin>>num;
    cout<<countDigits(num)<<endl;

    return 0;
}
