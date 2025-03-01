#include <bits/stdc++.h>
using namespace std;
vector<int> transformArray(vector<int>& nums) {
    for(int& i : nums){
        if(i%2 == 0){
            i = 0;
        }else{
            i = 1;
        }
    }
    sort(nums.begin(),nums.end());
    return nums;
}
int main(){
    vector<int> nums{1,5,1,4,2};
    transformArray(nums);
    for(auto i : nums){
        cout<<i<<'\t';
    }cout<<endl;

    return 0;
}