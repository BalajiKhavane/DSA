#include <iostream>
using namespace std;
string ReverseString(string s, int st, int end){
    if(st >= end){
        return s;
    }
    swap(s[st],s[end]);
    return ReverseString(s, st+1, end-1);
}
int main(){
    string s;
    cout<<"Enter string :"<<endl;
    cin>>s;
    cout<<ReverseString(s,0,s.size()-1)<<endl;

    return 0;
}