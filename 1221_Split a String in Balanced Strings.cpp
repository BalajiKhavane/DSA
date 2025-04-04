#include <bits/stdc++.h>
using namespace std;
int balancedStringSplit(string s) {
    int l_cnt = 0, r_cnt = 0, count = 0;
    for(auto i : s){
        if(i == 'L') l_cnt++;
        if(i == 'R') r_cnt++;
        if(l_cnt == r_cnt) count++;
    }
    return count;
}
int main(){
    string s;
    cout<<"Enter a string :"<<endl;
    cin>>s;
    cout<<balancedStringSplit(s)<<endl;

    return 0;
}