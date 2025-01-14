#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B){
    vector<int> ans;
    unordered_map<int,int> freq;
    for(int i=0;i<A.size();i++){
        freq[A[i]]++;
        freq[B[i]]++;
        int count = 0;
        for(auto j : freq){
            if(j.second >= 2){
                count++;
            }
        }
        ans.push_back(count);
    }
    return ans;
}
int main(){
    vector<int> A,B,result;
    A = {1,3,2,4};
    B = {3,1,2,4};
    result = findThePrefixCommonArray(A,B);
    for(auto i : result){
        cout<<i<<"\t";
    }cout<<endl;

    return 0;
}