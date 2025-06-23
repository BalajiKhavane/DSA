#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int getWinner(vector<int>& arr, int k) {
    unordered_map<int,int> freq;
    int winner = arr[0];
    for(int i=1;i<arr.size();i++){
        if(winner < arr[i]){
            winner = arr[i];
        }
        freq[winner]++;
        if(freq[winner] == k){
            return winner;
        }
    }
    
    return winner;
}
int main(){
    int k = 2;
    vector<int> arr{2,1,3,5,4,6,7};
    cout<<getWinner(arr,k)<<endl;

    k = 10;
    arr = {3,2,1};
    cout<<getWinner(arr,k)<<endl;

    return 0;
}