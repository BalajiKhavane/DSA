#include <iostream>
using namespace std;
int main(){
    int n,i,flag=0;
    cout<<"Enter any number :"<<endl;
    cin>>n;
    for(i=2;i<n;i++){
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

    return 0;
}