#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> numberGame(vector<int>& nums) {
    int n = nums.size();
    vector<int> arr;
    sort(nums.begin(),nums.end());
    for(int Alice=0;Alice<n;Alice+=2){
        int Bob = Alice+1;
        arr.push_back(nums[Bob]);
        arr.push_back(nums[Alice]);
    }
    return arr;
}
int main(){
    vector<int> nums = {5,4,2,3}, result;
    result = numberGame(nums);
    for(auto i : result){
        cout<<i<<"\t";
    }cout<<endl;

    return 0;
}