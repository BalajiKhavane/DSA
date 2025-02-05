#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
bool areAlmostEqual(string s1, string s2) {
    unordered_map<char,int> umap;
    for(auto i : s2) umap[i]++;
    int count = 0;
    for(int i=0;i<s1.size();i++){
        if(umap.find(s1[i]) == umap.end()){
            return false;
        }else{
            umap[s1[i]]--;
        }

        if(s1[i] != s2[i]){
            count++;
        }
    }

    for(auto i : umap){
        if(i.second != 0){
            return false;
        }
    }

    return (count == 2 or count == 0);
}
int main(){
    string s1 = "bank", s2 = "kanb";
    cout<<areAlmostEqual(s1,s2)<<endl;

    s1 = "attack", s2 = "defend";
    cout<<areAlmostEqual(s1,s2)<<endl;

    s1 = "kelb", s2 = "kelb";
    cout<<areAlmostEqual(s1,s2)<<endl;

    return 0;
}