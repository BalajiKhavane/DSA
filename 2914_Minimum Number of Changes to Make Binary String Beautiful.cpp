#include <iostream>
#include <string>
using namespace std;
int minChanges(string s) {
    int count = 0;
    for(int i=0;i<s.size()-1;i+=2){
        if(s[i] != s[i+1]){
            ++count;
        }
    }
    return count;
}
int main(){
    string s1 = "1001";
    string s2 = "0000";
    cout<<minChanges(s1)<<endl;
    cout<<minChanges(s2)<<endl;
    
    return 0;
}