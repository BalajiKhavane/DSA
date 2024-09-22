#include <iostream>
#include <vector>
using namespace std;
int mooresAlgorithm(vector<int>& vec){              //{1,2,2,4,2,2,3}
    int freq=0,ans=0;
    for(int i=0;i<vec.size();i++){
        if(freq == 0){
            ans = vec[i];
        }
        if(vec[i] == ans){
            freq++; 
        }else{
            freq--;
        }
    }
    return ans;
}

int main(){
    vector <int> vec = {1,2,2,2,1,2,3};
    cout<<mooresAlgorithm(vec);
    return 0;
}