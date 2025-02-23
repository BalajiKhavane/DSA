#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isSafe(int row, int col, int n, vector<string>& board){
    // Row
    for(int i=0;i<n;i++){
        if(board[row][i] == 'Q'){
            return false;
        }
    }
    // Column
    for(int i=0;i<n;i++){
        if(board[i][col] == 'Q'){
            return false;
        }
    }
    // Left Diagonal
    for(int i=row,j=col;i>=0 && j>=0 ;i--,j--){
        if(board[i][j] == 'Q'){
            return false;
        }
    }
    // Right Diagonal
    for(int i=row,j=col;i>=0&&j<n;i--,j++){
        if(board[i][j] == 'Q'){
            return false;
        }
    }
    return true;
}

void nQueens(vector<vector<string>>& ans, int row, int n, vector<string>& board){
    // Base case
    if(row == n){
        ans.push_back({board});
        return;
    }           

    for(int col=0;col<n;col++){
        if(isSafe(row, col, n, board)){
            board[row][col] = 'Q';  
            nQueens(ans, row+1, n, board);
            board[row][col] = '.';          // Backtracking
        }
    }
}

vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> ans;
    vector<string> board(n,string(n,'.'));
    nQueens(ans, 0, n, board);
    return ans;
}
int main(){
    vector<vector<string>> result;
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    result = solveNQueens(n);

    for(auto i : result){
        for(auto j : i){
            cout<<j<<endl;
        }cout<<endl;
    }cout<<endl;

    return 0;
}