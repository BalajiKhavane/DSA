#include <iostream>
#include <string>
using namespace std;
int maxScore(string s) {
    int ones = 0;
    int zeros = 0;
    int best = INT16_MIN;

    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == '1') {
            ones++;
        } else {
            zeros++;
        }
        
        best = max(best, zeros - ones);
    }
    
    if (s[s.size() - 1] == '1') {
        ones++;
    }
    
    return best + ones;
}
int main(){
    string s;
    cout<<"Enter the string :"<<endl;
    cin>>s;
    cout<<maxScore(s)<<endl;

    return 0;
}