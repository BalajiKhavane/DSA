#include <iostream>
#include <string>
using namespace std;
string removeOccurrences(string s, string part){
    while(s.find(part) < s.size()){
        s.erase(s.find(part),part.size());
    }
    return s;
}
int main(){
    string s="axxxxyyyyb",part = "xy";
    cout<<removeOccurrences(s,part);

    return 0;
}
