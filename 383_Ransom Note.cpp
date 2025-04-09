#include <iostream>
#include <unordered_map>
using namespace std;
bool canConstruct(string ransomNote, string magazine) {
    unordered_map<char,int> umap;
    for(auto i : magazine) umap[i]++;
    for(auto i : ransomNote){
        if(umap[i] == 0){
            return false;
        }else{
            umap[i]--;
        }
    }
    return true;
}
int main(){
    string ransomNote = "a", magazine = "b";
    cout<<canConstruct(ransomNote, magazine)<<endl;
    
    ransomNote = "aa", magazine = "ab";
    cout<<canConstruct(ransomNote, magazine)<<endl;
    
    ransomNote = "aa", magazine = "aab";
    cout<<canConstruct(ransomNote, magazine)<<endl;

    return 0;
}