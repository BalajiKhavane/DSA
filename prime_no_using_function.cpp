#include <iostream>
using namespace std;
void primeNumber(int n){
    int flag=0;
    if(n==1){
        cout<<n<<" is not prime number."<<endl;
    }
    if(n==2){
        cout<<n<<" is prime number."<<endl;
    }
    for(int i=2;i<n;i++){
        if(n%i == 0){
            cout<<n<<" is not prime number."<<endl;
            break;
        }else{
            flag=1;
        }
    }
    if(flag==1){
        cout<<n<<" is prime number."<<endl;
    }

}

int main(){
    int n;
    cout<<"Enter any number :"<<endl;
    cin>>n;
    primeNumber(n);
    return 0;
}