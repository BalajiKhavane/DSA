#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> dailyTemperatures(vector<int>& temperatures) {
    int n = temperatures.size();
    vector<int> ans(n,0);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(temperatures[j] > temperatures[i]){
                ans[i] = j-i;
                break;
            }
        }
    }
    return ans;
}
int main(){


    return 0;
}