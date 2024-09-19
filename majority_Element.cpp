//Find majority element in the array.Ex.[5,2,4,2,2,4,2] ans=2.

#include <iostream>
#include <vector>
#include <algorithm>        // For sorting
using namespace std;
int majorityElement(vector <int> vec){
    int n=vec.size();
    //sort
    sort(vec.begin(),vec.end());
    int freq=1,ans=vec[0];
    for(int i=1;i<n;i++){
        if(vec[i]==vec[i-1]){
            freq++;
        }else{
            ans=vec[i];
            freq=1;
        }

        if(freq >= n/2){
            return ans;
        }
    }
    return ans;
}

int main(){
    vector <int> vec={5,2,4,2,2,4,2};
    cout<<"The majority element :"<<majorityElement(vec);
    return 0;
}