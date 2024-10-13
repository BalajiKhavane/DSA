#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(vector<int>vec ,int key, int low, int high){
    if(low > high){
        return -1;
    }    
    int mid= low + (high - low)/2;
    if(key < vec[mid]){
        return binarySearch(vec,key,low,mid-1);
    }else if(key > vec[mid]){
        return binarySearch(vec,key,mid+1,high);
    }else{
        return mid+1;
    }
    
}

int main(){
    int n,low=0,high,key;
    vector<int>vec;
    cout<<"Enter the total number of elements :"<<endl;
    cin>>n;
    cout<<"Enter the sorted elements :"<<endl;
    for(int i=0;i<n;i++){
        int el;
        cin>>el;
        vec.push_back(el);
    }

    cout<<"Entered elements are :"<<endl;
    sort(vec.begin(),vec.end());
    for(int i: vec){
        cout<<i<<"\t";
    }

    cout<<"\nEnter the target element :"<<endl;
    cin>>key;
    high=--n;
    int result = binarySearch(vec,key,low,high);
    if(result != -1){
        cout<<"Element found at "<<result<<" location"<<endl;    
    }else{
        cout<<"Search is unsuccessful."<<endl;
    }

    return 0;
}