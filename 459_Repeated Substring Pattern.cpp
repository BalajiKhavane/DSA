#include <iostream>
#include <string>
using namespace std;

bool repeatedSubstringPattern(string s){
    string str=s+s;
    str.erase(str.length()-1,1);
    str.erase(0,1);
    return str.find(s) >= 0 && str.find(s) < str.length();
}

int main(){
    string s;
    cout<<"Enter a string :"<<endl;
    cin>>s;
    cout<<repeatedSubstringPattern(s);

    return 0;
}