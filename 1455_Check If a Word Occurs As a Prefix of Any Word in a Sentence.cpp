#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
int isPrefixOfWord(string sentence, string searchWord){
    vector<string> vec;
    string  ans;
    stringstream ss(sentence);
    while(ss >> ans){
        vec.push_back(ans);
    }
    int n = searchWord.size();
    for(int i=0;i<vec.size();i++){
        if(vec[i].substr(0,n) == searchWord){
            return i+1;
        }
    }
    return -1;
}
int main(){
    string sentence = "i love eating burger",searchWord = "burg";
    cout<<isPrefixOfWord(sentence,searchWord)<<endl;

    return 0;
}