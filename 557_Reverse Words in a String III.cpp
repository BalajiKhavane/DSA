#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s) {
    string temp;
    vector<string> vec;
    for(int i=0;i<s.size();i++){
        if(s[i] == ' '){
            reverse(temp.begin(),temp.end());
            vec.push_back(temp);
            temp.clear();
        }else if(i == s.size()-1){
            temp += s[i];
            reverse(temp.begin(),temp.end());
            vec.push_back(temp);
            temp.clear();
        }else{
            temp += s[i];
        }
    }
    temp.clear();
    for(auto i : vec){
        temp += ' ' + i;
    }
    temp.erase(temp.begin());
    return temp;
}
int main(){
    string s = "Let's take LeetCode contest";
    cout<<reverseWords(s)<<endl;

    s = "Mr Ding";
    cout<<reverseWords(s)<<endl;

    return 0;
}