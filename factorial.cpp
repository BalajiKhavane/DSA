#include <iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=n;i>=1;i--){
        fact *=i;
    }
    return fact;
}

int main(){
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    cout<<"The factorial of "<<n<<" is :"<<factorial(n)<<endl;

    return 0;
}