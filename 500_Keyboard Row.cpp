#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
vector<string> findWords(vector<string>& words) {
    string s1 = "qwertyuiop", s2 = "asdfghjkl", s3 = "zxcvbnm";
    vector<string> ans;
    for(auto& i : words){
        bool first_row = true, second_row = true, third_row = true;
        for(auto& j : i){
            j = tolower(j);
            if(s1.find(j) == string::npos) first_row = false;
            if(s2.find(j) == string::npos) second_row = false;
            if(s3.find(j) == string::npos) third_row = false;
        }
        if(first_row or second_row or third_row){
            ans.push_back(i);
        }
    }
    return ans;
}
int main(){
    vector<string> words = {"Hello","Alaska","Dad","Peace"};
    words = findWords(words);
    for(auto i : words){
        cout<<i<<"\t";
    }cout<<endl;

    return 0;
}