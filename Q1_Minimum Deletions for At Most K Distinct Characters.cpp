#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int minDeletion(string s, int k) {
    unordered_map<char, int> umap;
    for (char c : s) umap[c]++;
    
    vector<int> vec;
    for (auto& it : umap) {
        vec.push_back(it.second);
    }

    if (vec.size() <= k) return 0;

    sort(vec.begin(), vec.end());

    int count = 0;
    for (int i = 0; i < vec.size() - k; i++) {
        count += vec[i];
    }

    return count; // Correct return value
}
int main(){
    int k;
    string s;
    cin>>s>>k;
    cout<<minDeletion(s,k)<<endl;

    return 0;
}