#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> ans;
void solve(int st, int n, int k, vector<int>& temp){
    if(k == 0){
        ans.push_back(temp);
        return;
    }
    if(st > n){
        return;
    }
    temp.push_back(st);
    solve(st+1,n,k-1,temp);
    temp.pop_back();
    solve(st+1,n,k,temp);
}

vector<vector<int>> combine(int n, int k) {
    vector<int> temp;
    solve(1,n,k,temp);
    return ans;
}

int main(){
    int n = 4, k = 2;
    combine(n,k);
    for(auto i : ans){
        for(int j : i){
            cout<<j<<" ";
        }cout<<"\t";
    }cout<<endl;
    
    n = 1, k = 1;
    combine(n,k);
    for(auto i : ans){
        for(int j : i){
            cout<<j<<" ";
        }cout<<"\t";
    }cout<<endl;

    return 0;
}