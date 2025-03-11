#include <iostream>
#include <vector>
using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums) {
    int count = 0,max_cnt = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] == 1){
            count++;
        }else{
            count = 0;
        }
        max_cnt = max(max_cnt,count);
    }
    return max_cnt;
}
int main(){
    vector<int> nums {1,1,0,1,1,1};
    cout<<findMaxConsecutiveOnes(nums)<<endl;
    
    nums = {1,0,1,1,0,1};
    cout<<findMaxConsecutiveOnes(nums)<<endl;

    return 0;
}