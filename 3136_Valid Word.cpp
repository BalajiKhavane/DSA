#include <iostream>
#include <string>
using namespace std;
bool isValid(string word) {
    int has_vowels = 0, has_consonent = 0;
    if(word.size() < 3) return false;
    for(auto i : word){
        if(!isalnum(i)) return false;
        i = tolower(i);
        if(i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u'){
            has_vowels = 1;
        }else if(i >= 'a' and i <= 'z'){
            has_consonent = 1;
        }else{
            continue;
        }
    }  
    return (has_vowels == 1 and has_consonent == 1);
}
int main(){
    string word = "234Adas";
    cout<<isValid(word)<<endl;

    word = "b3";
    cout<<isValid(word)<<endl;

    word = "a3$e";
    cout<<isValid(word)<<endl;

    word = "AhI";
    cout<<isValid(word)<<endl;

    word = "UuE6";
    cout<<isValid(word)<<endl;

    return 0;
}