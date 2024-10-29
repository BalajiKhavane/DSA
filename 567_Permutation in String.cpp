#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
bool checkInclusion(string s1, string s2){
    if(s1.length()>s2.length()){
        return false;
    }
    int n= s1.size();
    unordered_map<char,int> umap1,umap2;
    for(auto i : s1){
        umap1[i]++;
    }
    for(int i=0;i<n;i++){
        umap2[s2[i]]++;
    }
    if(umap1==umap2){
        return true;
    }

    for(int i=n;i<s2.length();i++){
        umap2[s2[i]]++;
        char ch=s2[i-n];
        umap2[ch]--;
        if(umap2[ch]==0){
            umap2.erase(ch);
        }
        if(umap1==umap2){
            return true;
        }
    }
    return false;
}
int main(){
    string s1,s2;
    cout<<"Enter string1 :"<<endl;
    cin>>s1;
    cout<<"Enter string2 :"<<endl;
    cin>>s2;
    cout<<checkInclusion(s1,s2)<<endl;

    return 0;
}