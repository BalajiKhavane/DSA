#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int minOperations(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i <= n / 3; ++i) {
        unordered_set<int> seen;
        bool isDistinct = true;
        for (int j = i * 3; j < n; ++j) {
            if (seen.count(nums[j])) {
                isDistinct = false;
                break;
            }
            seen.insert(nums[j]);
        }
        if (isDistinct) return i;
    }
    return (n + 2) / 3; // fallback (though loop covers this)
}
int main() {
    vector<int> nums1 = {1, 2, 3, 4, 2, 3, 3, 5, 7};
    cout << minOperations(nums1) << endl; // Output: 2

    vector<int> nums2 = {4, 5, 6, 4, 4};
    cout << minOperations(nums2) << endl; // Output: 2

    vector<int> nums3 = {6, 7, 8, 9};
    cout << minOperations(nums3) << endl; // Output: 0

    return 0;
}
