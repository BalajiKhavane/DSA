#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPathCrossing(string path) {
    set<pair<int, int>> visited;
    int x = 0, y = 0;
    visited.insert({x, y});
    
    for (char dir : path) {
        if (dir == 'N') y++;
        else if (dir == 'S') y--;
        else if (dir == 'E') x++;
        else if (dir == 'W') x--;
        
        if (visited.count({x, y})) {
            return true;
        }
        visited.insert({x, y});
    }
    
    return false;
}    
int main(){
    string path = "NES";
    cout<<isPathCrossing(path)<<endl;
    
    path = "NESWW";
    cout<<isPathCrossing(path)<<endl;

    return 0;
}