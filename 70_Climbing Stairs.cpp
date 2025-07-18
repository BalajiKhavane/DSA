#include <iostream>
#include <vector>
using namespace std;

// Memoized helper function
int helper(int n, vector<int>& dp) {
    if (n == 0 || n == 1 || n == 2) {
        return n;
    }
    if (dp[n] != -1) {
        return dp[n];
    }
    return dp[n] = helper(n - 1, dp) + helper(n - 2, dp);
}

// Main function to calculate ways to climb stairs
int climbStairs(int n) {
    vector<int> dp(n + 1, -1);
    return helper(n, dp);
}

int main() {
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;

    int ways = climbStairs(n);
    cout << "Number of distinct ways to climb to the top: " << ways << endl;

    return 0;
}
