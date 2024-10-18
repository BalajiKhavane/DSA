#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool isAnagram(string str1,string str2){
    if(str1.length() != str2.length()){
        return false;
    }
    sort(str1.begin() , str1.end());
    sort(str2.begin() , str2.end());
    return str1 == str2;
}

int main()
{
    string str1,str2;
    cout << "Enter string 1 :" << endl;
    cin>>str1;
    cout << "Enter string 2 :" << endl;
    cin>>str2;
    if(isAnagram(str1,str2)){
        cout << "Given strings are Anagram." << endl;
    }else{
        cout << "Given strings are not Anagram." << endl;
    }
    
    return 0;
}