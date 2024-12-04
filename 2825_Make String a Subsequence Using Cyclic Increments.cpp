#include <iostream>
#include <string>
using namespace std;
bool canMakeSubsequence(string str1, string str2) {
    int j = 0;
    for(int i=0;i<str1.size();i++){
        if(j<str2.length() and str1[i] == str2[j]){
            j++;
        }else if(str1[i] == 'z'){
            if(str2[j] == 'a'){
                j++;
            }
        }else if(j<str2.length() and ++str1[i] == str2[j]){
            j++;
        }else{
            continue;
        }
        if(j == str2.size()) return true;
    }
    return false;
}
int main(){
    string str1 = "abc", str2 = "ad";
    cout<<canMakeSubsequence(str1,str2)<<endl;
    str1 = "zc", str2 = "ad";
    cout<<canMakeSubsequence(str1,str2)<<endl;
    str1 = "ab", str2 = "d";
    cout<<canMakeSubsequence(str1,str2)<<endl;

    return 0;
}