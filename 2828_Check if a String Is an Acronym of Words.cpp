#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool isAcronym(vector<string>& words, string s) {
    if(words.size() != s.length()) return false;
    string ans;
    for(int i=0;i<words.size();i++){
        ans += words[i][0];
    }
    return ans == s;
}
int main(){
    string s = "abc";
    vector<string> words = {"alice","bob","charlie"};
    cout<<isAcronym(words,s)<<endl;

    words = {"an","apple"};
    s = "a";
    cout<<isAcronym(words,s)<<endl;

    return 0;
}