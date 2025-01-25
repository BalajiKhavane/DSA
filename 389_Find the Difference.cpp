#include <iostream>
using namespace std;
char findTheDifference(string s, string t) {
    s += t;
    int c = 0;
    for(auto i : s){
        c ^= i;
    }
    return c;
}
int main(){
    string s = "abcd", t = "abcde";
    cout<<findTheDifference(s,t)<<endl;

    s = "", t = "y";
    cout<<findTheDifference(s,t)<<endl;

    return 0;
}