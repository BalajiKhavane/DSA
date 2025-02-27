#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> arrayRankTransform(vector<int>& arr) {
    int idx = 1;
    vector<int> nums(arr.begin(),arr.end());
    sort(arr.begin(),arr.end());
    unordered_map<int,int> umap;
    for(auto i : arr){
        if(umap.find(i) == umap.end()){
            umap[i] = idx;
            idx++;
        }
    }
    for(int i=0;i<nums.size();i++){
        nums[i] = umap[nums[i]];
    }
    return nums;
}
int main(){
    vector<int> arr = {40,10,20,30},result;
    result = arrayRankTransform(arr);
    
    for(auto i : result){
        cout<<i<<"\t";
    }cout<<endl;
    
    result = arr = {100,100,100};
    result = arrayRankTransform(arr);
    for(auto i : result){
        cout<<i<<"\t";
    }cout<<endl;
    
    arr = {37,12,28,9,100,56,80,5,12};
    result = arrayRankTransform(arr);
    for(auto i : result){
        cout<<i<<"\t";
    }cout<<endl;

    return 0;
}