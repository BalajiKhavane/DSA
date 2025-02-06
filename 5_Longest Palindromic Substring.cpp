#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string longestPalindrome(string s){
    string s1 =s;
    reverse(s1.begin(),s1.end());
    string ans="",long_ans="";
    for(int i=0;i<s.size();i++){
        if(s[i] == s1[i]){
            ans += s[i];
            if(ans.size() < long_ans.size()){
                long_ans = long_ans;
            }else{
                long_ans = ans;
            }
            
        }else{
            ans="";
        }
    }
    return long_ans;
}
int main(){
    string s = "dbabad";
    cout<<longestPalindrome(s)<<endl;

    return 0;
}