#include<iostream>
#include<map>
#include<vector>
using namespace std;
int majorityElement(vector<int>& nums){
    map<int,int> map;
    for(int i=0;i<nums.size();i++){
        map[nums[i]]++;
    }
    int n=nums.size();
    for(auto it : map){
        if(it.second > n/2){
            return it.first;
        }
    }
    return -1;
}

int main(){
    vector<int> vec={2,2,1,1,1,2,2};
    cout<<majorityElement(vec)<<endl;

    return 0;
}