#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int minimumSumSubarray(vector<int>& nums, int l, int r) {
    int l_sum = 0, r_sum = 0;
    
    // Calculate initial l_sum and r_sum
    for(int i = 0; i < l; i++) l_sum += nums[i];
    for(int i = 0; i < r; i++) r_sum += nums[i];

    int min_lsum = l_sum, min_rsum = r_sum;

    // Sliding window for minimum sum subarray of length l
    for(int i = l; i < nums.size(); i++){
        l_sum += nums[i] - nums[i - l];
        min_lsum = min(l_sum, min_lsum);
    }

    // Sliding window for minimum sum subarray of length r
    for(int i = r; i < nums.size(); i++){
        r_sum += nums[i] - nums[i - r];
        min_rsum = min(r_sum, min_rsum);
    }

    return min(min_lsum, min_rsum);
}
// Example usage
int main() {
    vector<int> nums = {3, -1, 4, -2, 2, -5, 1, 6};
    int l = 3, r = 2;
    cout << "Minimum Sum Subarray: " <<minimumSumSubarray(nums, l, r) << endl;

    return 0;
}
