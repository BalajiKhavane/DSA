#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int search(vector<int>& vec , int key){
    unordered_map<int,int> umap;
    for(int i=0;i<vec.size();i++){
        umap.insert(make_pair(vec[i],i));
    }

    if(umap.find(key) != umap.end()){
        for(auto i: umap){
            if(i.first == key){
                return i.second+1;
            }
        }
    }
    return -1;
}

int main() {
    int n,key,result;
    vector<int> vec;
    cout<<"Enter the total no. of elements :"<<endl;
    cin>>n;
    cout<<"Enter the elements :"<<endl;
    for(int i=0;i<n;i++){
        int el;
        cin>>el;
        vec.push_back(el);
    }

    cout<<"Elements are :"<<endl;
    for(int i: vec){
        cout<<i<<"\t";
    }cout<<endl;

    cout<<"Enter the key element :"<<endl;
    cin>>key;
    result=search(vec,key);
    if(result != -1){
        cout<<"Element found at "<< result <<" location"<<endl;
    }else{
        cout<<"Search is unsuccessful."<<endl;
    }

    return 0;
}
