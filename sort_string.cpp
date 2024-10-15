//Sort the given string.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter string :"<<endl;
    cin>>str;
    sort(str.begin(),str.end());
    for(char i:str){
        cout<<i;
    }

    return 0;
}