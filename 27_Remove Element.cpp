#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int removeElement(vector<int>& nums, int val){
    queue<int> queue;
    for(auto it : nums){
        if(it != val){
            queue.push(it);
        }
    }
    int k= queue.size();
    nums.clear();
    while(!queue.empty()){
        nums.push_back(queue.front());
        queue.pop();
    }

    return k;
}

int main(){
    vector<int> nums ={0,1,2,2,3,0,4,2};
    cout<<removeElement(nums,2);

    return 0;
}