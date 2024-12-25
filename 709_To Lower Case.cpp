#include <iostream>
#include <string>
using namespace std;
string toLowerCase(string s) {
    for(char& ch : s){
        ch = tolower(ch);
    }
    return s;
}
int main(){
    string s;
    cout<<"Enter string :"<<endl;
    cin>>s;
    cout<<toLowerCase(s)<<endl;

    return 0;
}