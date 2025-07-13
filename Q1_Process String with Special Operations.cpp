#include <iostream>
#include <algorithm>
using namespace std;
string processStr(string s) {
    if(s.size() == 0) return s;
    string ans = "";
    for(int i=0;i<s.size();i++){
        if(s[i] == '*'){
            if(ans.size() > 0){
                ans.pop_back();
            } 
        }else if(s[i] == '#'){
            ans += ans;
        }else if(s[i] == '%'){
            reverse(ans.begin(),ans.end());
        }else{
            ans += s[i];
        }
    }
    return ans;
}int main(){
    string s = "a#b%*";
    cout<<processStr(s)<<endl;

    s = "z*#";
    cout<<processStr(s)<<endl;

    return 0;
}