//Calculate maximum sum of subarray. Using Kadane's Algorithm.
#include <iostream>
using namespace std;
int maxSumOfSubarray(int arr[],int size){
    int curSum=0,maxSum=INT16_MIN;
    for(int i=0;i<size;i++){
        curSum += arr[i];
        maxSum= max(curSum,maxSum);
        if(curSum<0){
            curSum=0;
        }
    }
    return maxSum;
}

int main(){
    int arr[]={-48,39,-16,-60,24,10,-44};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Maximum sum of subarray: "<<maxSumOfSubarray(arr,size);
    return 0;
}