#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
    int n = arr.size(),count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(arr[i] - arr[j]) <= a){
                for(int k=j+1;k<n;k++){
                    if(abs(arr[j] - arr[k]) <= b and abs(arr[i] - arr[k]) <= c){
                        count++;
                    }
                }
            }   
        }
    }
    return count;
}
int main(){
    int a = 7, b = 2, c = 3;
    vector<int> arr = {3,0,1,1,9,7};
    cout<<countGoodTriplets(arr,a,b,c)<<endl;
    
    a = 0, b = 0, c = 1;
    arr = {1,1,2,2,3};
    cout<<countGoodTriplets(arr,a,b,c)<<endl;

    return 0;
}