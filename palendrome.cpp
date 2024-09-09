#include <iostream>
using namespace std;
int main(){
    int n,i,j,flag=0;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    string str =to_string(n);
    cout<<str<<endl;
    i=0;j=str.length()-1;
    while(i<=j){
        if(str[i]==str[j]){
            flag=1;
            i++;j--;
        }else{
            cout<<"The given string is not palendrome."<<endl;
            flag=0;
            break;
        }
    }
    if(flag == 1){
        cout<<"The given number is palendrome."<<endl;
    }

    return 0;
}