#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
bool judgeCircle(string moves) {
    unordered_map<char,int> umap;
    for(auto i : moves) umap[i]++;
    if(umap['U'] != umap['D']) return false;
    if(umap['L'] != umap['R']) return false;
    return true;
}
int main(){
    string moves = "UD";
    cout<<judgeCircle(moves)<<endl;
    
    moves = "LL";
    cout<<judgeCircle(moves)<<endl;

    return 0;
}