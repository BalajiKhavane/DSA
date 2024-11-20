#include <iostream>
#include <unordered_map>
using namespace std;
bool isIsomorphic(string s, string t){
    if(s.size() != t.size()) return false;
    unordered_map<char,char> umap1,umap2;
    for(int i=0;i<t.size();i++){
        if(umap1.find(s[i]) != umap1.end() || umap2.find(t[i]) != umap2.end()){
            if(umap1[s[i]] != t[i]){
                return false;
            }else if(umap2[t[i]] != s[i]){
                return false;
            }else{
                continue;
            }
        }else{
            umap1[s[i]] = t[i];
            umap2[t[i]] = s[i];
        }
    }
    return true;
}
int main(){
    string s = "egg", t = "add";
    cout<<isIsomorphic(s,t)<<endl;

    return 0;
}