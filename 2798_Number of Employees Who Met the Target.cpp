#include <iostream>
#include <vector>
using namespace std;
int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
    int count = 0;
    for(auto& i : hours){
        if(i >= target) count++;
    }
    return count;
}
int main(){
    int target;
    vector<int> hours{0,1,2,3,4};
    cout<<"Enter the target :"<<endl;
    cin>>target;
    cout<<numberOfEmployeesWhoMetTarget(hours,target)<<endl;

    return 0;
}