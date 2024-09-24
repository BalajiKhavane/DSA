#include <iostream>
#include <vector>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums){
    vector<int> vec;
    for(int i=0;i<nums.size();i++){
        int mul=1;
        for(int j=0;j<nums.size();j++){
            if(i!=j){
                mul *=nums[j];
            }
        }
        vec.push_back(mul);
    }
    return vec;
}
int main(){
    vector<int> nums={1,2,3,4};
    vector<int> vec;
    vec = productExceptSelf(nums);
    for(int i: vec){
        cout<<i<<" ";
    }

    return 0;
}