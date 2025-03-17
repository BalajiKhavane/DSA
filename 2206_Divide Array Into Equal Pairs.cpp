#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool divideArray(vector<int>& nums) {
    unordered_map<int, int> freq;
    for (int i : nums) {
        freq[i]++;
    }
    for (auto it : freq) {
        if (it.second % 2 != 0) return false;
    }
    return true;
}
int main() {
    vector<int> nums1 = {3, 2, 3, 2, 2, 2};
    cout<<divideArray(nums1)<<endl;
    nums1 = {1, 2, 3, 4};
    cout<<divideArray(nums1)<<endl;

    return 0;
}