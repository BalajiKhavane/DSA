#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
using namespace std;
vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
    unordered_map<int,int> ans;
    set<int> set1,set2,set3;

    for(auto i : nums1) set1.insert(i);
    for(auto i : nums2) set2.insert(i);
    for(auto i : nums3) set3.insert(i);

    for(auto i : set1) ans[i]++;
    for(auto i : set2) ans[i]++;
    for(auto i : set3) ans[i]++;

    nums1.clear();
    for(auto i : ans){
        if(i.second >= 2){
            nums1.push_back(i.first);
        }
    }
    return nums1;
}
int main(){
    vector<int> num1,num2,num3,result;
    num1 = {1,1,3,2};
    num2 = {2,3};
    num3 = {3};
    result = twoOutOfThree(num1,num2,num3);
    for(auto i : result){
        cout<<i<<"\t";
    }cout<<endl;
    
    return 0;
}