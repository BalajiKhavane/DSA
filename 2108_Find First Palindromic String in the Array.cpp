#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool isPalindrome(string s){
    int i=0, j = s.size()-1;
    while(i < j){
        if(s[i] != s[j]){
            return false;
        }
        i++;j--;
    }
    return true;
}

string firstPalindrome(vector<string>& words) {
    for(auto& i :words){
        if(isPalindrome(i)){
            return i;
        }
    }
    return "";
}
int main(){
    vector<string> words = {"abc","car","ada","racecar","cool"};
    cout<<firstPalindrome(words)<<endl;
    words = {"notapalindrome","racecar"};
    cout<<firstPalindrome(words)<<endl;

    return 0;
}