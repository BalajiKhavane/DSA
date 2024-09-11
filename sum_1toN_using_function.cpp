#include <iostream>
using namespace std;
int sumOfNumbers(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum +=i;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    cout<<"The sum is :"<<sumOfNumbers(n)<<endl;
    return 0;
}