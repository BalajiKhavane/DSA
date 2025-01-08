#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int>& arr, int key, int st, int end){
    if(st <= end){
        int mid = st + (end - st)/2;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] > key){
            return binarySearch(arr,key,st,mid-1);
        }else{
            return binarySearch(arr,key,mid+1,end);
        }
    }
    return -1;
}

int search(vector<int>& nums, int target) {
    return binarySearch(nums,target,0,nums.size()-1);
}
int main(){
    int target = 9;
    vector<int> nums = {-1,0,3,5,9,12};
    cout<<search(nums, target)<<endl;

    return 0;
}