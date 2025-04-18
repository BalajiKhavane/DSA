#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool areOccurrencesEqual(string s) {
    unordered_map<char,int> umap;
    for(char i : s) umap[i]++;
    int freq = umap[s[0]];

    for(auto i : umap){
        if(i.second != freq){
            return false;
        }
    }
    
    return true;
}
int main(){
    string s;
    cout<<"Enter string :"<<endl;
    cin>>s;
    cout<<areOccurrencesEqual(s)<<endl;

    return 0;
}