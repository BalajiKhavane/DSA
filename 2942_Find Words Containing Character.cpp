#include <iostream>
#include <vector>
using namespace std;
vector<int> findWordsContaining(vector<string>& words, char x) {
    vector<int> ans;
    for(int i=0;i<words.size();i++){
        if(words[i].find(x) != string :: npos){
            ans.push_back(i);
        }
    }
    return ans;
}

void display(vector<int> ans){
    for(int i : ans){
        cout<<i<<"\t";
    }cout<<endl;
}

int main(){
    vector<int> ans;
    char x = 'e';
    vector<string> words{"leet","code"};
    ans = findWordsContaining(words,x);
    display(ans);

    words = {"abc","bcd","aaaa","cbc"};
    x = 'a';
    ans = findWordsContaining(words,x);
    display(ans);

    words = {"abc","bcd","aaaa","cbc"};
    x = 'z';
    ans = findWordsContaining(words,x);
    display(ans);
    
    return 0;
}