#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
    unordered_set<int> uset;
    vector<int> ans;
    for(auto i : nums2) uset.insert(i);
    for(auto i : nums3) uset.insert(i);
    for(auto i : nums1){
        if(uset.find(i) != uset.end()){
            ans.push_back(i);
        }
    }
    return ans;
}

int main(){
    vector<int> num1,num2,num3,ans;
    num1 = {1,1,3,2};
    num2 = {2,3};
    num3 = {3};
    twoOutOfThree(num1,num2,num3);
    for(auto i : ans){
        cout<<i<<"\t";
    }cout<<endl;
    return 0;
}