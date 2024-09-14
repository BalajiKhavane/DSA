#include <iostream>
using namespace std;
void decimalToBinary(int n){
    int a[n/2],i=0;
    while(n>0){
        a[i]=n%2;
        i++;
        n/=2;
    }
    cout<<"Binary number :"<<endl;
    for(int j=i-1;j>=0;j--){
        cout<<a[j];
    }
}
int main(){
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    decimalToBinary(n);
    return 0;
}