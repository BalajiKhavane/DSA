#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;
int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
    int count = 0;
    sort(arr2.begin(), arr2.end());

    for (auto el : arr1) {
        int i = 0, j = arr2.size() - 1;
        bool valid = true; 

        while (i <= j) {
            int mid = i + (j - i) / 2;
            if (abs(el - arr2[mid]) <= d) {
                valid = false;
                break;
            } else if (arr2[mid] < el) {
                i = mid + 1;
            } else {
                j = mid - 1;
            }
        }

        if (valid) count++;
    }
    return count;
}
int main(){
    vector<int> arr1,arr2;
    arr1 = {4,5,8}, arr2 = {10,9,1,8}; 
    int d = 2;
    cout<<findTheDistanceValue(arr1,arr2,d)<<endl;

    arr1 = {1,4,2,3}, arr2 = {-4,-3,6,10,20,30}; 
    d = 3;
    cout<<findTheDistanceValue(arr1,arr2,d)<<endl;

    arr1 = {2,1,100,3}, arr2 = {-5,-2,10,-3,7};
    d = 6;
    cout<<findTheDistanceValue(arr1,arr2,d)<<endl;
    
    return 0;
}
