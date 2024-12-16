#include <iostream>
#include <set>
#include <string>
using namespace std;
bool checkIfPangram(string sentence) {
    string alphabets = "abcdefghijklmnopqrstuvwxyz";
    set<char> set;
    for(auto i : sentence) set.insert(i);
    for(auto i : alphabets){
        if(set.find(i) == set.end()){
            return false;
        }
    }
    return true;
}
int main(){
    string sentence = "thequickbrownfoxjumpsoverthelazydog";
    cout<<checkIfPangram(sentence)<<endl;
    sentence = "leetcode";
    cout<<checkIfPangram(sentence)<<endl;

    return 0;
}