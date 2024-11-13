#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& nums) {
    int n = nums.size();
    long array_sum = accumulate(nums.begin(),nums.end(),0);
    long sum = n*(n+1)/2;
    int diff = int(sum - array_sum);
    return diff;
}
int main(){
    vector<int> nums = {9,6,4,2,3,5,7,0,1};
    cout<<missingNumber(nums)<<endl;
    return 0;
}