#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int heightChecker(vector<int>& heights) {
    vector<int> expected(heights);
    sort(expected.begin(),expected.end());
    int count = 0;
    for(int i=0;i<heights.size();i++){
        if(heights[i] != expected[i]){
            count++;
        }
    }
    return count;
}
int main(){
    vector<int> heights;
    heights = {1,1,4,2,1,3};
    cout<<heightChecker(heights)<<endl;
    
    heights = {5,1,2,3,4};
    cout<<heightChecker(heights)<<endl;
    
    heights = {1,2,3,4,5};
    cout<<heightChecker(heights)<<endl;

    return 0;
}

