#include <iostream>
using namespace std;
int main(){
    string str;
    int i;
    cout<<"Enter the string :"<<endl;
    cin>>str;
    cout<<str<<endl;
    cout<<"Reverse string is :"<<endl;
    for(i=str.length();i>=0;i--){
        cout<<str[i];
    }

    return 0;
}