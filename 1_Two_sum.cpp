#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int,int> Hashmap;
    for(int i=0;i<nums.size();i++){
        int complement = target - nums[i];
        if(Hashmap.find(complement) != Hashmap.end()){
            return {i,Hashmap[complement]};
        }
        Hashmap[nums[i]]=i;
    }
    return {};
}

int main(){
    int n,target;
    vector<int> nums,vec;
    cout<<"Enter the total number of elements :"<<endl;
    cin>>n;
    cout<<"Enter the elements :"<<endl;
    for(int i=0;i<n;i++){
        int el;
        cin>>el;
        nums.push_back(el);
    }
    cout<<"Enter the target elements :"<<endl;
    cin>>target;

    vec=twoSum(nums,target);
    for(int i: vec){
        cout<<i<<"\t";
    }cout<<endl;

    return 0;
}