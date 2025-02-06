#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void rotate(vector<int>& nums, int k){
    int n = nums.size();
    int i = n - k;
    int j = ++i;
    while(i >= 0){
        nums[n-1] = nums[i];
        n--;i--;
    }
    int idx = 0;
    while(j < nums.size()){
        nums[idx] = nums[j];
        j++;idx++;
    }
}
int main(){
    int k = 3;
    vector<int> nums = {1,2,3,4,5,6,7};
    rotate(nums,k);

    for(auto i : nums){
        cout<<i<<"\t";
    }cout<<endl;

    k=2;
    nums = {-1,-100,3,99};
    rotate(nums,k);

    for(auto i : nums){
        cout<<i<<"\t";
    }cout<<endl;

    return 0;
}