#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool isPalindrome(string s){
    int i=0,j=s.size()-1;
    while(i<j){
        if(isalnum(s[i]) && isalnum(s[j])){
            if(tolower(s[i]) != tolower(s[j])){
                return false;
            }
            i++;j--;
        }else if(!isalnum(s[i])){
            i++;
        }else{
            j--;
        }
    }
    return true;
}
int main(){
    string s;
    cout<<"Enter a string :"<<endl;
    getline(cin,s);
    if(isPalindrome(s)){
        cout<<"The given string is palindrome."<<endl;
    }else{
        cout<<"The given string is not palindrome."<<endl;
    }

    return 0;
}