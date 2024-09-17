#include <iostream>
#include <vector>
using namespace std;
int singleNumber(vector<int>& nums) {
    int ans=0;
    for(int i:nums){
        ans ^= i;
    }
    return ans;
}

int main(){
    vector <int> vec= {2,4,3,3,4};
    cout<<"Single number is :"<<singleNumber(vec);

    return 0;
}
