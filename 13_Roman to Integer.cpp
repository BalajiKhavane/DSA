#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int romanToInt(string s) {
    int res = 0;
    unordered_map<char, int> roman = {
        {'I', 1},
        {'V', 5},
        {'X', 10}, 
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    for (int i = 0; i < s.size() - 1; i++) {
        if (roman[s[i]] < roman[s[i + 1]]) {
            res -= roman[s[i]];
        } else {
            res += roman[s[i]];
        }
    }

    return res + roman[s[s.size() - 1]];        
}
int main(){
    cout<<romanToInt("MCMXCIV")<<endl;  //1000 + 900 + 90 + 4 = 1994
    cout<<romanToInt("MMCIX")<<endl;    //1000 + 1000 + 100 + 9 = 2109

    return 0;
}