#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& vec,int key){
    int size=vec.size();
    int i=0,j=size-1,ans=-1;
    
    while(i<=j){
        int mid= (i+j)/2;
        if(vec[mid]<key){
            i=mid+1;
        }else if(vec[mid]>key){
            j=mid-1;
        }else{
            ans=mid;
            break;
        }
    }
    return ans;
}

int main(){
    int low=0,n,key;
    vector <int> vec;
    cout<<"Enter the number of elements :"<<endl;
    cin>>n;
    cout<<"Enter the element :"<<endl;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        vec.push_back(ele);
    }
    cout<<"Enter the key element :"<<endl;
    cin>>key;
    int result = binarySearch(vec,key);
    if(result != -1){
        cout<<"Element found at "<<result+1<<" location"<<endl;
    }else{
        cout<<"Element is not found"<<endl;
    }

    return 0;
}