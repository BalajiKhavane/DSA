#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

string smallestPalindrome(string s) {
    map<char,int> freq;
    for(char ch : s) freq[ch]++;

    string left, mid, right;

    for(auto i : freq){
        // Add half of the characters to left
        for(int j=0; j < i.second/2; j++){
            left += i.first;
        }
        // If odd frequency, keep one char for middle
        if(i.second % 2 != 0 && mid.empty()){
            mid = i.first;
        }
    }

    // Make right half as reverse of left
    right = left;
    reverse(right.begin(), right.end());

    return left + mid + right;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    string result = smallestPalindrome(s);
    cout << "Smallest Palindrome: " << result << endl;

    return 0;
}
