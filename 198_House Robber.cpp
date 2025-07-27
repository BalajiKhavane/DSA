#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int>& nums, int idx, vector<int>& dp) {
    if (idx >= nums.size()) {
        return 0;
    }

    if (dp[idx] != -1) return dp[idx];

    int steal = nums[idx] + maxProfit(nums, idx + 2, dp);
    int skip = maxProfit(nums, idx + 1, dp);

    return dp[idx] = max(steal, skip);
}

int rob(vector<int>& nums) {
    if (nums.size() == 0) {
        return 0;
    }
    vector<int> dp(nums.size(), -1);
    return maxProfit(nums, 0, dp);
}

int main() {
    vector<int> houses = {2, 7, 9, 3, 1}; // Example test case
    cout << "Maximum amount robbed: " << rob(houses) << endl;
    return 0;
}
