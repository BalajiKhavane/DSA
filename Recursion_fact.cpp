#include <iostream>
using namespace std;
int fact(int n){
    if(n == 1){
        return 1;
    }               //Base Case

    return n * fact(n-1);   // Recursive Call
}
int main(){
    int n;
    cout<<"Enter number :"<<endl;
    cin>>n;
    cout<<fact(n)<<endl;

    return 0;
}