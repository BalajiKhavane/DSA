#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int reverseDegree(string s) {
    unordered_map<char,int> umap;
    int n = 1;
    for(char i = 'z';i >= 'a';i--){
        umap[i] = n;
        n++;
    }

    n = 1;
    int ans = 0;
    for(auto i : s){
        ans += umap[i] * n;
        n++;
    }

    return ans;
}
int main(){
    string s = "abc";
    cout<<reverseDegree(s)<<endl;
    s = "zaza";
    cout<<reverseDegree(s)<<endl;

    return 0;
}