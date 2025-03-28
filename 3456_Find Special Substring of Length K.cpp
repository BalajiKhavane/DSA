#include <iostream>
#include <string>
using namespace std;
bool hasSpecialSubstring(string s, int k) {
    int n = s.size();
    for (int i = 0; i < n; i++) {
        int count = 1;
        while (i + 1 < n && s[i] == s[i + 1]) {
            count++;
            i++;
        }
        if (count == k){
            return true;
        }
    }
    return false;
}
int main(){
    string s = "aaabaaa";
    int k = 3;
    cout<<hasSpecialSubstring(s,k)<<endl;
    
    s = "abc";
    k = 2;
    cout<<hasSpecialSubstring(s,k)<<endl;

    return 0;
}