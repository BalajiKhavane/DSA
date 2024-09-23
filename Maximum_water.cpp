#include <iostream>
#include <vector>
using namespace std;
int maxArea(vector<int>& height) {          //1,8,6,2,5,4,8,3,7
    int size=height.size();
    int i=0;int j=size-1;
    int max_amount=0;
    while(i<j){
        int wt = j - i;
        int ht = min(height[i],height[j]);
        int amount= wt * ht;
        max_amount= max(amount, max_amount);
        height[i]<height[j]? i++ : j--;
    }
    return max_amount;
}

int main(){
    vector <int> height = {1,8,6,2,5,4,8,3,7};
    cout<<"The maximum amount of water a container can store :"<<maxArea(height);
}