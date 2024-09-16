//Calculating maximum sum of subarray.
#include <iostream>
using namespace std;
void maxSumOfSubarray(int arr[],int size){
    int start,end,maxSum=INT16_MIN;
    for(start=0;start<size;start++){
        int curSum=0;
        for(end=start;end<size;end++){
            curSum += arr[end];
            maxSum= max (maxSum,curSum);
        }
    }
    cout << "Maximum sum of subarray: " << maxSum << endl;
}

int main(){
    int arr[]={-48,39,-16,-60,24,10,44};
    int size=sizeof(arr)/sizeof(arr[0]);
    maxSumOfSubarray(arr,size);
    return 0;
}