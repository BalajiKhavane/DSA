#include <iostream>
using namespace std;
void fibonacci(int n){
    int a[n],i;
    a[0]=0;
    a[1]=1;
    a[2]=1;
    for(i=3;i<=n;i++){
        a[i]=a[i-1]+a[i-2];
    }
    cout<<"Fibonacci Series :"<<endl;
    for(i=0;i<=n;i++){
        cout<<a[i]<<"\t";
    }
    
}
int main(){
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    fibonacci(n);
    return 0;
}