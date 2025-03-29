#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
int maxVowels(string s, int k) {
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    int count = 0, max_cnt = 0;
    
    // Count vowels in the first window of size k
    for(int i = 0; i < k; i++) {
        if(vowels.count(s[i])) count++;
    }
    max_cnt = count;

    // Slide the window across the string
    for(int i = k; i < s.size(); i++) {
        if(vowels.count(s[i])) count++;      // Add new character
        if(vowels.count(s[i - k])) count--;  // Remove outgoing character
        max_cnt = max(max_cnt, count);
    }
    
    return max_cnt;
}    
int main(){
    int k = 3;
    string s = "abciiidef";
    cout<<maxVowels(s,k)<<endl;
    
    k = 2;
    s = "aeiou";
    cout<<maxVowels(s,k)<<endl;
    
    k = 3;
    s = "leetcode";
    cout<<maxVowels(s,k)<<endl;

    return 0;
}