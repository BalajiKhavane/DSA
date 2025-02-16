#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s) {
    string temp,ans;
    stringstream ss (s);
    while(ss >> temp){
        reverse(temp.begin(),temp.end());
        ans += " " + temp;
    }
    ans.erase(ans.begin());
    return ans;
}
int main(){
    string s = "Let's take LeetCode contest";
    cout<<reverseWords(s)<<endl;

    s = "Mr Ding";
    cout<<reverseWords(s)<<endl;

    return 0;
}