#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findTheWinner(int n, int k) {
    int winner = 0;
    for (int i = 2; i <= n; i++) {
        winner = (winner + k) % i;
    }
    return winner + 1; // Convert to 1-based index
}
int main(){
    int n = 6, k = 5;
    cout<<findTheWinner(n,k)<<endl;

    return 0;
}