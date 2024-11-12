#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
string sortVowels(string s){
    string t,vowels;
    for(auto i : s){
        if(tolower(i)=='a' || tolower(i)=='e' || tolower(i)=='i' || tolower(i)=='o' || tolower(i)=='u'){
            vowels.push_back(i);
        }
    }
    if(vowels.empty()) return s;
    sort(vowels.begin(),vowels.end());
    int j=0;
    for(int i=0;i<s.length();i++){
        if(tolower(s[i])=='a' || tolower(s[i])=='e' || tolower(s[i])=='i' || tolower(s[i])=='o' || tolower(s[i])=='u'){
            t.push_back(vowels[j]);
            j++;
        }else{
            t.push_back(s[i]);
        }
    }
    return t;
}
int main(){
    string s;
    cout<<"Enter a string :"<<endl;
    cin>>s;
    cout<<sortVowels(s)<<endl;

    return 0;
}