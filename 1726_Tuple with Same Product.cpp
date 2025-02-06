#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int tupleSameProduct(vector<int>& nums) {
    unordered_map<int,int> umap;
    if(nums.size() < 4) return 0;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i] != nums[j]){
                umap[nums[i]*nums[j]]++;
            }
        }
    }
    int count = 0;
    for(auto i : umap){
        if(i.second >= 2){
            count += (i.second*2) * (i.second*2 - 2);
        }
    }
    return count;
}
int main(){
    vector<int> nums;
    nums = {2,3,4,6};
    cout<<tupleSameProduct(nums)<<endl;

    nums = {2,3,4};
    cout<<tupleSameProduct(nums)<<endl;

    nums = {1,2,4,5,10};
    cout<<tupleSameProduct(nums)<<endl;

    return 0;
}