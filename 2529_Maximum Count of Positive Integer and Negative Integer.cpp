#include <iostream>
#include <vector>
using namespace std;
int maximumCount(vector<int>& nums) {
    int pos = 0, neg = 0;
    for(auto i : nums){
        if(i < 0){
            neg++;
        }else if(i > 0){
            pos++;
        }else{
            continue;
        }
    }
    return max(pos,neg);
}
int main(){
    vector<int> nums = {-2,-1,-1,1,2,3};
    cout<<maximumCount(nums)<<endl;
    
    nums = {-3,-2,-1,0,0,1,2};
    cout<<maximumCount(nums)<<endl;
    
    nums = {5,20,66,1314};
    cout<<maximumCount(nums)<<endl;

    return 0;
}