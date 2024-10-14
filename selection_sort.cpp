#include <iostream>
#include <vector>
using namespace std;

vector<int> selectionSort(vector<int>& vec){
    int n= vec.size();
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(vec[j] < vec[min]){
                min=j;
            }  
        }
        swap(vec[i],vec[min]);
    }
    return vec;
}

int main(){
    int n;
    vector<int> vec;
    cout<<"Enter the total no. elements :"<<endl;
    cin>>n;
    cout<<"Enter the elements :"<<endl;
    for(int i=0;i<n;i++){
        int el;
        cin>>el;
        vec.push_back(el);
    }
    selectionSort(vec);
    cout<<"Sorted Array :\t";
    for(int i : vec){
        cout<<i<<"\t";
    }

    return 0;
}