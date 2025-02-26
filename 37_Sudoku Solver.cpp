#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<char>>& board, int row, int col, char val, int n) {
    // Check row
    for (int i = 0; i < n; i++) {
        if (board[row][i] == val) return false;
    }

    // Check column
    for (int i = 0; i < n; i++) {
        if (board[i][col] == val) return false;
    }

    // Check 3x3 subgrid
    int startRow = (row / 3) * 3;
    int startCol = (col / 3) * 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[startRow + i][startCol + j] == val) return false;
        }
    }

    return true;
}

bool solve(vector<vector<char>>& board, int row, int col, int n) {
    // If we reach the end of the board, return true
    if (row == n) return true;

    // Move to the next row if column reaches the end
    if (col == n) return solve(board, row + 1, 0, n);

    // If the current cell is already filled, move to the next column
    if (board[row][col] != '.') return solve(board, row, col + 1, n);

    // Try placing numbers 1-9
    for (char num = '1'; num <= '9'; num++) {
        if (isSafe(board, row, col, num, n)) {
            board[row][col] = num;
            if (solve(board, row, col + 1, n)) return true;
            board[row][col] = '.';  // Backtrack
        }
    }
    return false;
}

void solveSudoku(vector<vector<char>>& board) {
    int n = board.size();
    solve(board, 0, 0, n);
}    
int main(){
    vector<vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    
    solveSudoku(board);
    for(auto i : board){
        for(auto j : i){
            cout<<j<<'\t';
        }cout<<endl;
    }cout<<endl;

    return 0;
}