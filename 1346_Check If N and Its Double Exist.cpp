#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
bool checkIfExist(vector<int>& arr){
    unordered_set<int> uset;
    for(auto i : arr){
        if((uset.find(i*2) != uset.end()) or (i%2 == 0 and uset.find(i/2) != uset.end())){
            return true;
        } 
        uset.insert(i);
    } 
    return false;
}
int main(){
    vector<int> arr = {10,2,5,3};
    cout<<checkIfExist(arr)<<endl;
    arr.clear();
    arr = {3,1,7,11};
    cout<<checkIfExist(arr)<<endl;

    return 0;
}