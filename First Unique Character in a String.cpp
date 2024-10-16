#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int firstUniqChar(string s) {
    unordered_map<char,int> umap;
    for(char ch : s){
        umap[ch]++;
    }
    
    for(int i=0;i<s.size();i++){
        if(umap[s[i]]==1){
            return i;
        }
    }

    return -1;
}

int main(){
    string s;
    cout<<"Enter the string :"<<endl;
    cin>>s;
    cout<<firstUniqChar(s);

    return 0;
}