#include <iostream>
#include <string>
using namespace std;
bool isSubsequence(string s, string t) {
    int i=0,j=0;
    while(i < s.size() and j < t.size()){
        if(s[i] == t[j]){
            i++;
        }
        j++;
    }
    return i == s.size();
}
int main(){
    string s = "abc", t = "ahbgdc";
    cout<<isSubsequence(s,t)<<endl;
    s = "axc", t = "ahbgdc";
    cout<<isSubsequence(s,t)<<endl;

    return 0;
}