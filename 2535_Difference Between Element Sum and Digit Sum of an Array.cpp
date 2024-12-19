#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <numeric>
using namespace std;

int differenceOfSum(vector<int>& nums) {
    int element_sum = accumulate(nums.begin(),nums.end(),0);
    int digit_sum = 0;
    for(auto i : nums){
        while(i > 0){
            digit_sum += i%10;
            i /= 10;
        }
    }
    return abs(element_sum - digit_sum);
}

int main(){
    vector<int> nums{1,15,6,3};
    cout<<differenceOfSum(nums)<<endl;
    nums = {1,2,3,4};
    cout<<differenceOfSum(nums)<<endl;
    
    return 0;
}