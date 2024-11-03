#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool rotateString(string s, string goal){
    if(s.length() != goal.length()) return false;
    return (s+s).find(goal) != string::npos;
}
int main(){
    string s,goal;
    cout<<"Enter a string :"<<endl;
    cin>>s;
    cout<<"Enter a goal string :"<<endl;
    cin>>goal;
    cout<<rotateString(s,goal)<<endl;

    return 0;
}