#include <iostream>
#include <vector>
#include <algorithm>  // For lower_bound

using namespace std;

int maximumCount(vector<int>& nums) {
    int n = nums.size();
    
    // Find the first non-negative number index
    int negCount = lower_bound(nums.begin(), nums.end(), 0) - nums.begin();
    
    // Find the first positive number index
    int posCount = nums.end() - upper_bound(nums.begin(), nums.end(), 0);

    return max(negCount, posCount);
}

int main() {
    vector<int> nums = {-2, -1, -1, 1, 2, 3};
    cout << maximumCount(nums) << endl;

    nums = {-3, -2, -1, 0, 0, 1, 2};
    cout << maximumCount(nums) << endl;

    nums = {5, 20, 66, 1314};
    cout << maximumCount(nums) << endl;

    return 0;
}
