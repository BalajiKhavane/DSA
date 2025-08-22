#include <iostream>
using namespace std;

const long long mod = 1000000007;

int countHomogenous(string s) {
    long long ans = 0;
    int st = 0, end = 0;
    while (st < s.size() && end < s.size()) {
        while (end < s.size() && s[st] == s[end]) {
            end++;
        }
        long long n = end - st;  
        ans = (ans + (n * (n + 1) / 2) % mod) % mod;
        st = end;
    }
    return ans;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    cout << "Count of homogenous substrings = " << countHomogenous(s) << endl;

    return 0;
}
