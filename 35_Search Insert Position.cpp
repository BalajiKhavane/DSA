#include <iostream>
#include <vector>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
    int i=0,j=nums.size()-1,mid;
    while(i<=j){
        mid = i + (j-i)/2;
        if(nums[mid] < target){
            i=mid+1;
        }else if(nums[mid] > target){
            j=mid-1;
        }else{
            return mid;
        }
    }  
    return i;
}

int main(){
    vector<int> nums={1,3,5,6};
    int target;
    cout<<"Enter target :"<<endl;
    cin>>target;
    cout<<searchInsert(nums,target);

    return 0;
}