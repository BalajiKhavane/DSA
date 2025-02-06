#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int takeCharacters(string s, int k){
    int l = s.size()/2, r = s.size()/2;
    unordered_map<char,int> umap;
    for(auto i : s) umap[i]++;
    while(l >= 0 || r < s.size()){
        if(umap[s[l]] >= k){
            umap[s[l]]--;
            --l;
        }else if(umap[s[r]] >= k){
            umap[s[r]]--;
            ++r;
        }else{
            return s.size()-(r-l);
        }
    }
    return -1;
}
int main(){
    int k = 2;
    string s = "aabaaaacaabc";
    cout<<takeCharacters(s,k)<<endl;

    return 0;
}