#include <iostream>
using namespace std;
void rotateArray(int* arr, int size, int rotation){
    if(rotation == 0){
        return;
    }
    int temp = arr[0];
    for(int i=0;i<size;i++){
        arr[i] = arr[i+1];
    }
    arr[size-1] = temp;
    rotateArray(arr,size,rotation-1);
}
int main(){
    int rotation;
    int arr[] = {1, 2, 3, 4, 5};
    cout<<"Enter number of rotations :"<<endl;
    cin>>rotation;
    int size = sizeof(arr)/sizeof(arr[0]);
    rotateArray(arr,size,rotation);

    for(int i : arr){
        cout<<i<<'\t';
    }cout<<endl;

    return 0;
}