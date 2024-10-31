#include <iostream>
#include <string>
#include <map>
using namespace std;
int longestPalindrome(string s){
    map<char,int> hmap;
    int ans=0,flag=0;
    for(auto i : s) hmap[i]++;
    for(auto i : hmap){
        if(i.second%2 == 0){
            ans += i.second;
        }else{
            flag = 1;
            ans += i.second-1;
        }
    }
    if(flag==1) ++ans;
    return ans;
}

int main(){
    string s= "abccccdd";
    cout<<longestPalindrome(s);

    return 0;
}