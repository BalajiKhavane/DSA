#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int prefixCount(vector<string>& words, string pref) {
    int count = 0;
    for(auto i : words){
        if(i.rfind(pref, 0) == 0){
            count++;
        }
    }
    return count;
}
int main(){
    string pref = "at";
    vector<string> words = {"pay","attention","practice","attend"};
    cout<<prefixCount(words,pref)<<endl;
    
    pref = "code";
    words = {"leetcode","win","loops","success"};
    cout<<prefixCount(words,pref)<<endl;

    return 0;
}