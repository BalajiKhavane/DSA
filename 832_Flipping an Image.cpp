#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image){
    for(auto& i : image){
        reverse(i.begin(),i.end());
        for(auto& j : i){
            (j == 0)? j=1:j=0;
        }
    }
    return image;
}
int main(){
    vector<vector<int>> image{{1,1,0},{1,0,1},{0,0,0}};
    flipAndInvertImage(image);
    for(auto i : image){
        for(auto j : i){
            cout<<j<<" ";
        }cout<<"\t";
    }cout<<endl;
    return 0;
}