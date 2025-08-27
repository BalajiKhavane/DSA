#include <iostream>
#include <vector>
using namespace std;

int numSquares(int n) {
    if(n==0 || n==1 || n==2 || n==3){
        return n;
    }

    vector<int> dp(n+1);
    for(int i=0;i<=3;i++){
        dp[i] = i;
    }

    for(int i=4;i<=n;i++){
        dp[i] = i; // max squares = i (1^2 + 1^2 + ... + 1^2)
        for(int j=1;j*j<=i;j++){
            dp[i] = min(dp[i],1 + dp[i - j*j]);
        }
    }
    return dp[n];
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Minimum number of perfect squares for " << n << " is: " << numSquares(n) << endl;
    return 0;
}
