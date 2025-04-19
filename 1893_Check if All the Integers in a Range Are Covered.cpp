#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isCovered(vector<vector<int>>& ranges, int left, int right) {
    set<int> set;
    for(int i=0;i<ranges.size();i++){
        for(int j=ranges[i][0];j<=ranges[i][1];j++){
            set.insert(j);
        }
    }
    for(int i=left;i<=right;i++){
        if(set.find(i) == set.end()){
            return false;
        }
    }
    return true;
}
int main(){
    int left, right;
    vector<vector<int>> ranges = {{1,2},{3,4},{5,6}};
    cout<<"Enter the left and right :"<<endl;
    cin>>left>>right;
    cout<<isCovered(ranges,left,right)<<endl;
    
    ranges = {{1,10},{10,20}};
    cout<<isCovered(ranges,left,right)<<endl;

    return 0;
}