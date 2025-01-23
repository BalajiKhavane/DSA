#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool compareMaps(string word, string pattern){
    if(word.size() != pattern.size()) return false;
    map<char, char> patternToWord;
    map<char, char> wordToPattern;
    for(int i=0;i<word.size();i++){
        char ww = word[i];
        char pw = pattern[i];
        if (patternToWord.count(pw) && patternToWord[pw] != ww)
            return false;
        if (wordToPattern.count(ww) && wordToPattern[ww] != pw)
            return false;
        patternToWord[pw] = ww;
        wordToPattern[ww] = pw;
    }
    return true;
}

vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
    vector<string> ans;
    for(auto word : words){
        if(compareMaps(word, pattern)){
            ans.push_back(word);
        }
    }
    return ans;
}
int main(){
    vector<string> words,ans;
    words = {"abc","deq","mee","aqq","dkd","ccc"};
    string pattern = "abb";
    ans = findAndReplacePattern(words,pattern);

    for(auto i : ans){
        cout<<i<<"\t";
    }cout<<endl;

    words = {"a","b","c"}; 
    pattern = "a";
    ans = findAndReplacePattern(words,pattern);

    for(auto i : ans){
        cout<<i<<"\t";
    }cout<<endl;

    return 0;
}