#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProduct(vector<int>& nums) {
    int maxi = nums[0], mini = nums[0], result = nums[0];
    for(int i = 1; i < nums.size(); i++){
        if(nums[i] < 0){
            swap(mini, maxi);
        }
        mini = min(nums[i], nums[i] * mini);
        maxi = max(nums[i], nums[i] * maxi);
        result = max(maxi, result);
    }  
    return result;
}

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements:\n";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int result = maxProduct(nums);
    cout << "Maximum product of a contiguous subarray is: " << result << endl;

    return 0;
}
