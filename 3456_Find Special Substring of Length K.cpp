#include <iostream>
#include <string>
using namespace std;
bool hasSpecialSubstring(string s, int k) {
    int count;
    for(int i=0;i<s.size()-1;i++){
        count = 1;
        while(i<s.size()-1 && s[i]==s[i+1]){
            count++;
            i++;
        }
        if(count == k){
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