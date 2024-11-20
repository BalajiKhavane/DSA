#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>
using namespace std;
bool wordPattern(string pattern, string s){
    string ans;
    vector<string> words;
    unordered_map<char,string> umap1;
    unordered_map<string,char> umap2;
    stringstream ss(s);
    while(ss >> ans){
        words.push_back(ans);
    }
    if(words.size() != pattern.size()) return false;
    for(int i=0;i<words.size();i++){
        if(umap1.find(pattern[i]) != umap1.end() || umap2.find(words[i]) != umap2.end()){
            if(umap1[pattern[i]] != words[i]) return false;
            else if(umap2[words[i]] != pattern[i]) false;
            else continue;
        }else{
            umap1[pattern[i]] = words[i];
            umap2[words[i]] = pattern[i];
        }
    }
    return true;
}
int main(){
    string pattern="abba",s = "dog cat cat dog";
    cout<<wordPattern(pattern,s);

    return 0;
}