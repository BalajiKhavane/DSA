#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;
vector<string> summaryRanges(vector<int>& nums) {
    if(nums.size() == 0) return {};
    if(nums.size() == 1) return {to_string(nums[0])};
    vector<string> ans;
    for(int i=0;i<nums.size();i++){
        int a = nums[i];
        while(i+1 < nums.size() and nums[i+1] == nums[i]+1){
            i++;
        }
        int b = nums[i];
        if(a == b){
            ans.push_back(to_string(a));
        }else{
            ans.push_back(to_string(a) + "->" + to_string(b));
        }
    }
    return ans;
}
int main(){
    vector<string> result;
    vector<int> nums{0,1,2,4,5,7};
    result = summaryRanges(nums);
    for(string i : result){
        cout<<i<<"\t";
    }cout<<endl;

    nums = {0,2,3,4,6,8,9};
    result = summaryRanges(nums);
    for(string i : result){
        cout<<i<<"\t";
    }cout<<endl;

    return 0;
}
