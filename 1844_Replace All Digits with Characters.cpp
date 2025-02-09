#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string replaceDigits(string s) {
    for(int i=1;i<s.size();i+=2){
        int temp = s[i] - '0';
        s[i] = s[i-1] + temp;
    }
    return s;
}
int main(){
    string s = "a1c1e1";
    cout<<replaceDigits(s)<<endl;
    
    s = "a1b2c3d4e";
    cout<<replaceDigits(s)<<endl;

    return 0;
}