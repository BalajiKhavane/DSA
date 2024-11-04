#include <iostream>
#include <string>
using namespace std;
string compressedString(string word) {
    string comp = "";  
    int i = 0;
    while (i < word.length()) {
        char c = word[i];  
        int count = 0;
        while (i < word.length() && word[i] == c && count < 9) {
            ++count;++i;
        }
        comp += to_string(count) + c;
    }
    return comp;
}

int main() {
    string s1 = "abcde";
    cout<<compressedString(s1)<<endl;
    string s2 = "aaaaaaaaaaaaaabb";
    cout<<compressedString(s2)<<endl;
    return 0;
}
