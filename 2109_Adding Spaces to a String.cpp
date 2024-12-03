#include <iostream>
#include <vector>
#include <string>
using namespace std;
string addSpaces(string s, vector<int>& spaces){
    string ans;
    int j=0;
    for(int i=0;i<s.size();i++){
        if(j<spaces.size() && i == spaces[j]){
            ans += ' ';
            ++j;
        }
        ans += s[i];
    }
    return ans;
}
int main(){
    string s = "LeetcodeHelpsMeLearn";
    vector<int> spaces{8,13,15};
    cout<<addSpaces(s,spaces)<<endl;
    s= "icodeinpython";
    spaces = {1,5,7,9};
    cout<<addSpaces(s,spaces)<<endl;
    s = "spacing";
    spaces = {0,1,2,3,4,5,6};
    cout<<addSpaces(s,spaces)<<endl;

    return 0;
}