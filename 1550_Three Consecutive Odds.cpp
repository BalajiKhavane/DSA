#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool threeConsecutiveOdds(vector<int>& arr) {
    //if(arr.size()<3) return false;
    for(int i=1;i<arr.size()-1;i++){
        if(arr[i-1]%2 != 0 and arr[i]%2 != 0 and arr[i+1]%2 != 0){
            return true;
        }
    }
    return false;
}
int main(){
    vector<int> arr{1,2,34,3,4,5,7,23,12};
    cout<<threeConsecutiveOdds(arr)<<endl;

    arr = {2,6,4,1};
    cout<<threeConsecutiveOdds(arr)<<endl;

    return 0;
}