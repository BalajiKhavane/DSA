#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int minimumSumSubarray(vector<int>& nums, int l, int r) {
    int n = nums.size();
    int min_sum = INT_MAX;
    vector<int> prefix(n + 1, 0);

    // Compute prefix sum
    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + nums[i];
    }

    // Sliding window for different lengths
    for (int size = l; size <= r; size++) {
        for (int i = 0; i + size <= n; i++) {
            int subarray_sum = prefix[i + size] - prefix[i]; // Sum of subarray nums[i:i+size]
            if (subarray_sum > 0) {
                min_sum = min(min_sum, subarray_sum);
            }
        }
    }

    return (min_sum == INT_MAX) ? -1 : min_sum;
}
// Example usage
int main() {
    vector<int> nums = {3, -1, 4, -2, 2, -5, 1, 6};
    int l = 3, r = 2;
    cout << "Minimum Sum Subarray: " <<minimumSumSubarray(nums, l, r) << endl;

    return 0;
}
