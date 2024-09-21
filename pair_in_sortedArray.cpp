#include <iostream>
#include <vector>
using namespace std;

vector<int> pairInSortedArray(vector<int>& nums, int target){
    int i=0,j=nums.size()-1;
    vector <int> vec;
    while(i<=j){
        if(nums[i]+nums[j] < target){
            i++;
        }else if(nums[i]+nums[j] > target){
            j--;
        }
        else{
            vec.push_back(i);
            vec.push_back(j);
            break;
        }
    }
    return vec;
}

int main(){
    int target;
    vector <int> nums = {2,5,8,11,16,25};
    cout<<"Enter the target sum:";
    cin>>target;
    vector <int> vec = pairInSortedArray(nums,target);
    if(vec.empty()){
        cout<<"No such pair available."<<endl;
    }else{
        cout<<vec[0]<<", "<<vec[1]<<endl;
    }
    
    return 0;
}