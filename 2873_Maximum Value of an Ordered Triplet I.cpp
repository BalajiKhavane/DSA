#include <iostream>
#include <vector>
using namespace std;
long long maximumTripletValue(vector<int>& nums) {
    int n = nums.size();
    long long max_ans = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-1;j++){
            if(nums[i] < nums[j]) continue;
            long long ans = 0;
            int k = n-1;
            while(j < k){
                ans = ((long long)nums[i] - (long long)nums[j]) * (long long) nums[k];
                max_ans = max(ans, max_ans);
                k--;
            }
        }
    }
    return max_ans;
}
int main(){
    vector<int> nums = {12,6,1,2,7};
    cout<<maximumTripletValue(nums)<<endl;
    
    nums = {1,10,3,4,19};
    cout<<maximumTripletValue(nums)<<endl;
    
    nums = {1,2,3};
    cout<<maximumTripletValue(nums)<<endl;

    return 0;
}