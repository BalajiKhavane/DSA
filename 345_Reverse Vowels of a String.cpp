#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
bool is_vowel(char ch){
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

string reverseVowels(string s){
    int i=0,j=s.length()-1;
    while(i < j){
        if(!is_vowel(s[i])){
            i++;
        }else if(!is_vowel(s[j])){
            j--;
        }else{
            swap(s[i],s[j]);
            i++;j--;
        }
    }
    return s;
}
int main(){
    string s;
    cout<<"Enter a string :"<<endl;
    cin>>s;
    cout<<reverseVowels(s)<<endl;
    return 0;
}