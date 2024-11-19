#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool is_numeric(string s){
    return !s.empty() && all_of(s.begin(),s.end(), ::isdigit);
}

int maximumValue(vector<string>& strs) {
    int ans = 0,result=0;
    for(auto i : strs){
        if(is_numeric(i)){
            ans = stoi(i);
        }else{
            ans = i.length();
        }
        result = max(ans,result);
    }
    return result;
}
int main(){
    vector<string> strs = {"alic3","bob","3","4","00000"};
    cout<<maximumValue(strs)<<endl;
    return 0;
}