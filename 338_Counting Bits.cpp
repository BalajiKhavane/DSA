#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> countBits(int n) {
    vector<int> ans(n+1);
    ans[0] = 0;
    for(int i=1;i<=n;i++){
        ans[i] = ans[i / 2] + (i % 2);
    }
    return ans;
}
int main(){
    int n;
    vector<int> result;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    result = countBits(n);

    for(auto i : result){
        cout<<i<<'\t';
    }cout<<endl;

    return 0;
}