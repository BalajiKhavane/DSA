#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string findValidPair(string s) {
    unordered_map<char,int> umap;
    for(auto i : s) umap[i]++;
    int first = 0, second = 1;
    while(second < s.size()){
        if(s[first] != s[second]){
            if(umap[s[first]] == (s[first] - '0') && umap[s[second]] == (s[second] - '0')){
                string ans;
                ans += s[first];
                ans += s[second];
                return ans;
            }
        }
        first++;
        second++;
    }
    return "";
}
int main(){
    string s = "2523533";
    cout<<findValidPair(s)<<endl;
    
    s = "221";
    cout<<findValidPair(s)<<endl;
    
    s = "22";
    cout<<findValidPair(s)<<endl;

    return 0;
}