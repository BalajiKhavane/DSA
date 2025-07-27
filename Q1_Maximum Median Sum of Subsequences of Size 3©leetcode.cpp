#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long maximumMedianSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int st = 0, end = nums.size() - 1;
    long long sum = 0;
    while (st < end) {
        sum += nums[end - 1]; // Picking the middle element of the triplet (assuming triplets)
        end -= 2;
        st++;
    }
    return sum;
}

int main() {
    vector<int> nums;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }

    long long result = maximumMedianSum(nums);
    cout << "Maximum Median Sum: " << result << endl;

    return 0;
}
