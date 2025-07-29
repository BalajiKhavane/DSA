#include <iostream>
using namespace std;

int countGoodSubstrings(string s) {
    int ans = 0;
    if(s.size() < 3) return ans;
    for(int i = 0; i <= s.size() - 3; i++) {
        char a = s[i];
        char b = s[i + 1];
        char c = s[i + 2];

        if(a != b && a != c && b != c) {
            ans++;
        }
    }
    return ans;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int result = countGoodSubstrings(s);
    cout << "Number of good substrings of length 3: " << result << endl;

    return 0;
}
