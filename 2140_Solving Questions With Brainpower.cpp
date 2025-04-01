#include <iostream>
#include <vector>
using namespace std;

long long mostPoints(vector<vector<int>>& questions) {
    int n = questions.size();
    vector<long long> dp(n + 1, 0);  // DP array initialized to 0

    for (int i = n - 1; i >= 0; --i) {
        int points = questions[i][0];
        int next = i + questions[i][1] + 1;

        // Option 1: Solve the question
        long long solve = points + (next < n ? dp[next] : 0);

        // Option 2: Skip the question
        long long skip = dp[i + 1];

        // Take the maximum of both choices
        dp[i] = max(solve, skip);
    }

    return dp[0];
}

int main() {
    // Example input
    vector<vector<int>> questions = {{3,2}, {4,3}, {4,4}, {2,5}};

    // Call the function and print the result
    cout << "Maximum Points: " << mostPoints(questions) << endl;
    
    questions = {{1,1},{2,2},{3,3},{4,4},{5,5}};
    cout << "Maximum Points: " << mostPoints(questions) << endl;
    
    return 0;
}