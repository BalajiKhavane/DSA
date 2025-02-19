#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int mod = 1000000007;

int threeSumMulti(vector<int>& arr, int target) {
    int ans = 0, n = arr.size();
    sort(arr.begin(), arr.end());
    
    for (int i = 0; i < n; i++) {
        int j = i + 1, k = n - 1; // Start j from i+1
        
        while (j < k) {
            int sum = arr[i] + arr[j] + arr[k];
            
            if (sum < target) {
                j++;
            } else if (sum > target) {
                k--;
            } else { 
                // Case 1: arr[j] != arr[k]
                if (arr[j] != arr[k]) {
                    int leftCount = 1, rightCount = 1;
                    
                    // Count occurrences of arr[j]
                    while (j + 1 < k && arr[j] == arr[j + 1]) {
                        leftCount++;
                        j++;
                    }
                    
                    // Count occurrences of arr[k]
                    while (k - 1 > j && arr[k] == arr[k - 1]) {
                        rightCount++;
                        k--;
                    }
                    
                    ans = (ans + (leftCount * rightCount) % mod) % mod;
                    j++;
                    k--;
                } 
                // Case 2: arr[j] == arr[k], so choose (k - j + 1)C2 pairs
                else {
                    int count = k - j + 1;
                    ans = (ans + (count * (count - 1)) / 2) % mod;
                    break; // Since all values in this range are same, move to next i
                }
            }
        }
    }
    return ans;
}
int main() {
    vector<int> arr = {1,1,2,2,3,3,4,4,5,5}; // Sample input
    int target = 8;

    int result = threeSumMulti(arr, target);
    
    cout << "Number of valid triplets: " << result << endl;

    return 0;
}
