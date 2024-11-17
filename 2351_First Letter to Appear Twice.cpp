#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
char repeatedCharacter(string s){
    unordered_map<char,int> umap;
    for(auto i : s){
        if(umap.find(i) != umap.end()){
            return i;
        }
        umap[i]++;
    }
    return '\0';
}
int main(){
    string s="abcdd";
    cout<<repeatedCharacter(s);
    return 0;
}