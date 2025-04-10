#include <iostream>
#include <vector>  // Include vector header
using namespace std;

int sumOfGoodNumbers(std::vector<int>& nums, int k) {
    int sum = 0;
    int n = nums.size();
    for (int i = 0; i < n; ++i) {
        if (i >= k && nums[i] <= nums[i - k]) {
            continue;
        }
        if (i + k < n && nums[i] <= nums[i + k]) {
            continue;
        }
        sum += nums[i];
    }
    return sum;
}

int main() {
    vector<int> nums = {5, 1, 3, 4, 6, 2};
    int k = 2;

    int result = sumOfGoodNumbers(nums, k);

    cout << "Sum of good numbers: " << result << endl;

    return 0;
}
