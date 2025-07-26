#include <iostream>
#include <unordered_map>
using namespace std;
int lengthOfLongestSubstring(string s){
    int left = 0, max_cnt = 0;
    unordered_map<char,int> umap;
    for(int right = 0;right < s.size();right++){
        if(umap.find(s[right]) != umap.end()){
            left = umap[s[right]]+1;
            umap[s[right]] = right;
        }else{
            umap[s[right]] = right;
            max_cnt = max(max_cnt, right-left+1);
        }
    }       
    return max_cnt;
}                              
int main(){
    string s;
    cout<<"Enter a string :"<<endl;
    cin>>s;
    cout<<lengthOfLongestSubstring(s);
    return 0;
}