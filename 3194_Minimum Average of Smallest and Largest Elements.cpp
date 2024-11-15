#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
double minimumAverage(vector<int>& nums) {
    double avg=INT32_MAX;
    sort(nums.begin(),nums.end());
    int i=0,j=nums.size()-1;
    while(i<j){
        avg = min(avg,(nums[i] + nums[j])/2.0);
        i++;j--;
    }
    return avg;
}
int main(){
    vector<int> nums = {1,9,8,3,10,5};
    cout<<minimumAverage(nums)<<endl;

    return 0;
}