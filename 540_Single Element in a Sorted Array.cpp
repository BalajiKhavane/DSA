#include <iostream>
#include <vector>
using namespace std;
int singleNonDuplicate(vector<int>& nums){
    int n= nums.size();
    if(n==1){
        return nums[0];
    }
    if(nums[0]!=nums[1]){
        return nums[0];
    }
    if(nums[n-2]!=nums[n-1]){
        return nums[n-1];
    }
    int st=1,end=n-2,mid;
    while(st<=end){
        mid=st + (end-st)/2;
        if(nums[mid-1] != nums[mid] && nums[mid] != nums[mid+1]){
            return nums[mid];
        }else if(mid%2==0){
            if(nums[mid]==nums[mid-1]){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }else{
            if(nums[mid]==nums[mid-1]){
                st= mid+1;
            }else{
                end=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> nums={7,7,10,11,11,12,12};
    cout<<singleNonDuplicate(nums);

    return 0;
}