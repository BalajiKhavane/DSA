#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int findLucky(vector<int>& arr) {
    int ans, max_ans = -1;
    unordered_map<int,int> freq;
    for(auto i : arr) freq[i]++;
    for(auto i : freq){
        if(i.first == i.second){
            ans = i.first;
            max_ans = max(ans, max_ans);
        }
    }
    return max_ans;
}
int main(){
    vector<int> arr = {2,2,3,4};
    cout<<findLucky(arr)<<endl;
    
    arr = {1,2,2,3,3,3};
    cout<<findLucky(arr)<<endl;
    
    arr = {2,2,2,3,3};
    cout<<findLucky(arr)<<endl;

    return 0;
}