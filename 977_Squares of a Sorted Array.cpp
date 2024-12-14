#include <iostream>
#include <vector>
#include <set>
using namespace std;
vector<int> sortedSquares(vector<int>& nums) {
    multiset<int> set;
    for(auto i : nums){
        set.insert(i*i);
    }
    nums = {set.begin(),set.end()};
    return nums;
}
int main(){
    vector<int> nums, result;
    nums = {-4,-1,0,3,10};
    result = sortedSquares(nums);
    for(int i : result){
        cout<<i<<'\t';
    }cout<<endl;

    nums = {-7,-3,2,3,11};
    result = sortedSquares(nums);
    for(int i : result){
        cout<<i<<'\t';
    }cout<<endl;

    return 0;
}