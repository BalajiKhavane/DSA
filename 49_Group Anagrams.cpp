#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs){
    unordered_map<string,vector<string>> umap;
    string temp;
    for(int i=0;i<strs.size();i++){
        temp = strs[i];
        sort(strs[i].begin(),strs[i].end());
        umap[strs[i]].push_back(temp);
    }

    vector<vector<string>> ans;
    for(auto i : umap){
        ans.push_back(i.second);
    }
    return ans;
}

int main(){
    vector<string> strs{"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> result;
    result = groupAnagrams(strs);
    for(auto i : result){
        for(auto j : i){
            cout<<j<<"\t";
        }cout<<endl;
    }cout<<endl;

    return 0;
}