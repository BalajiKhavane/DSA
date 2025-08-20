#include <iostream>
#include <vector>
using namespace std;
int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
    int st = -1, end = -1, ans = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] > right){
            st = end = i;
            continue;
        }
        if(nums[i] >= left){
            end = i;
        }
        ans += end - st;
    }
    return ans;
}
int main(){
    int left,right,n;
    cout<<"Enter the number of elements :"<<endl;
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements :"<<endl;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<"Enter left and right : "<<endl;
    cin>>left>>right;
    cout<<numSubarrayBoundedMax(nums,left,right)<<endl;

    return 0;
}