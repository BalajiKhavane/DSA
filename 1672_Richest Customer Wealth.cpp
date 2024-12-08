#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maximumWealth(vector<vector<int>>& accounts) {
    int sum = 0, maxSum = 0;
    for(int i=0;i<accounts.size();i++){
        sum = accumulate(accounts[i].begin(),accounts[i].end(),0);
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}
int main(){
    vector<vector<int>> accounts = {{1,5},{7,3},{3,5}};
    cout<<maximumWealth(accounts)<<endl;
    accounts = {{2,8,7},{7,1,3},{1,9,5}};
    cout<<maximumWealth(accounts)<<endl;
    accounts = {{1,2,3},{3,2,1}};
    cout<<maximumWealth(accounts)<<endl;

    return 0;
}