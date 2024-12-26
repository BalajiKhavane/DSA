#include <iostream>
using namespace std;
int differenceOfSums(int n, int m) {
    int num1 = 0,num2 = 0;
    for(int i=1;i<=n;i++){
        if(i%m == 0){
            num2 += i;
        }else{
            num1 += i;
        }
    }
    return num1 - num2;
}
int main(){
    int m,n;
    cout<<"Enter number :"<<endl;
    cin>>m;
    cout<<"Enter number :"<<endl;
    cin>>n;
    cout<<differenceOfSums(m,n)<<endl;

    return 0;
}
