#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool detectCapitalUse(string word) {
    return all_of(word.begin(), word.end(), ::isupper) ||
            all_of(word.begin(), word.end(), ::islower) ||
            (isupper(word[0]) && all_of(word.begin() + 1, word.end(), ::islower));
}
int main(){
    string word = "USA";
    cout<<detectCapitalUse(word)<<endl;
    
    word = "FlaG";
    cout<<detectCapitalUse(word)<<endl;

    return 0;
}