#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> set;
    for(auto i : nums){
        if(set.find(i) != set.end()){
            return true;
        }
        set.insert(i);
    }
    return false;
}

int main(){
    vector<int> vec1{1,1,1,3,3,4,3,2,4,2};
    vector<int> vec2{1,2,3,4};
    cout<<containsDuplicate(vec1)<<endl;
    cout<<containsDuplicate(vec2)<<endl;
    
    return 0;
}