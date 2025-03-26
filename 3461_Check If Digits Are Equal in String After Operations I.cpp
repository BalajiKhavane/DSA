#include <iostream>
#include <string>
using namespace std;
bool hasSameDigits(string s) {
    while(s.size() > 2){
        string temp = "";
        for(int i=0;i<s.size()-1;i++){
            int cur = s[i] - '0';
            int next = s[i+1] - '0';
            int ans = (cur + next) % 10;
            temp += ans + '0';
        }   
        s = temp;
    }
    
    return s[0] == s[1];
}
int main(){
    string s = "3902";
    cout<<hasSameDigits(s)<<endl;

    s = "34789";
    cout<<hasSameDigits(s)<<endl;

    return 0;
}