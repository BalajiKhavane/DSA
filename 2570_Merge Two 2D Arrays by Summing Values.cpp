#include <iostream>
#include <vector>
#include <map>
using namespace std;
vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
    map<int, int> map;
    for (auto& i : nums1) {
        map[i[0]] += i[1];
    }
    for (auto& i : nums2) {
        map[i[0]] += i[1];
    }
    vector<vector<int>> result;
    for (auto& i : map) {
        result.push_back({i.first, i.second});
    }

    return result;
}
int main(){
    vector<vector<int>> nums1,nums2,result;
    nums1 = {{1,2},{2,3},{4,5}};
    nums2 = {{1,4},{3,2},{4,1}};
    result = mergeArrays(nums1,nums2);
    for(auto i : result){
        for(auto j : i){
            cout<<j<<'\t';
        }cout<<endl;
    }cout<<endl;
    
    nums1 = {{2,4},{3,6},{5,5}};
    nums2 = {{1,3},{4,3}};
    result = mergeArrays(nums1,nums2);
    for(auto i : result){
        for(auto j : i){
            cout<<j<<'\t';
        }cout<<endl;
    }cout<<endl;
    
    return 0;
}

