#include <iostream>
#include <vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    if(matrix.empty() or matrix[0].empty()) return false;
    int m = matrix.size(), n = matrix[0].size();
    int st = 0, end = (m*n)-1;
    while(st <= end){
        int mid = st + (end - st)/2;
        int row = mid/n;
        int col = mid%n;
        if(target < matrix[row][col]){
            end = mid - 1;
        }else if(target > matrix[row][col]){
            st = mid + 1;
        }else{
            return true;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> matrix;
    int target = 3;
    matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    cout<<searchMatrix(matrix, target)<<endl;

    target = 13;
    matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    cout<<searchMatrix(matrix, target)<<endl;

    return 0;
}
