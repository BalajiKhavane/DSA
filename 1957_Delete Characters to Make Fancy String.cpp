#include <iostream>
#include <string>
using namespace std;
string makeFancyString(string s){
    if(s.size() <= 2){
        return s;
    }
    string ans="";
    for(int i=0;i<s.size();i++){
        if(i==0 || i==s.length()-1){
            ans += s[i];
            continue;
        }
        if(s[i]==s[i-1] && s[i]==s[i+1]){
            continue;
        }else{
            ans += s[i];
        }
    }
    return ans;
}
int main(){
    string s;
    cout<<"Enter a string :"<<endl;
    cin>>s;
    cout<<makeFancyString(s)<<endl;

    return 0;
}