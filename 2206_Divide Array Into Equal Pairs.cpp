#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool divideArray(vector<int>& nums) {
    unordered_map<int, int> freq;
    for (int num : nums) {
        freq[num]++;
    }
    for (auto& [key, count] : freq) {
        if (count % 2 != 0) return false;
    }
    return true;
}

int main() {
    vector<int> nums1 = {3, 2, 3, 2, 2, 2};
    vector<int> nums2 = {1, 2, 3, 4};

    cout << (divideArray(nums1) ? "true" : "false") << endl; // Output: true
    cout << (divideArray(nums2) ? "true" : "false") << endl; // Output: false

    return 0;
}
