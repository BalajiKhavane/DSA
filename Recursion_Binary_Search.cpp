#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int>& nums, int st, int end, int target){
    if(st <= end){    
        int mid = st + (end - st)/2;     // Calculate the mid-point to avoid overflow
        if(nums[mid] > target){
            return binarySearch(nums, st, mid-1, target);   // Search right half
        }else if(nums[mid] < target){
            return binarySearch(nums, mid+1, end, target);  // Search left half
        }else{
            return mid;     // Target found at index mid
        }
    }
    return -1;    // Target not found
}
int main(){
    vector<int> nums{2,4,7,34,52,67,90};
    int st = 0, end = nums.size()-1, target = 52;
    cout<<binarySearch(nums, st, end, target)<<endl;

    return 0;
}