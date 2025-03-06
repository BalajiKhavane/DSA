#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    int n = grid.size();
    vector<int> vec;
    unordered_map<int,int> freq;
    for(auto i : grid){
        for(auto j : i){
            freq[j]++;
            if(freq[j] == 2){
                vec.push_back(j);
            }
        }
    }
    for(int i=1;i<=n*n;i++){
        if(freq.find(i) == freq.end()){
            vec.push_back(i);
        }
    }
    return vec;
}
int main(){
    vector<int> nums;
    vector<vector<int>> grid = {{1,3},{2,2}};
    nums = findMissingAndRepeatedValues(grid);

    for(auto i : nums){
        cout<<i<<'\t';
    }cout<<endl;
    
    grid = {{9,1,7},{8,9,2},{3,4,6}};
    nums = findMissingAndRepeatedValues(grid);
    for(auto i : nums){
        cout<<i<<'\t';
    }cout<<endl;

    return 0;
}