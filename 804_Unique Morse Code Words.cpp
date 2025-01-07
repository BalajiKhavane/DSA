#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;
int uniqueMorseRepresentations(vector<string>& words) {
    set<string> set;
    vector<string> vec {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    for(auto i : words){
        string ans;
        for(auto j : i){
            ans += vec[j - 'a'];
        }
        set.insert(ans);
    }
    return set.size();
}
int main(){
    vector<string> words = {"gin","zen","gig","msg"};
    cout<<uniqueMorseRepresentations(words)<<endl;

    words = {"a"};
    cout<<uniqueMorseRepresentations(words)<<endl;

    return 0;
}