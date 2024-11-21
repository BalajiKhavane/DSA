#include <iostream>
#include <vector>
using namespace std;
bool isBoomerang(vector<vector<int>>& points) {
    int dy2 = points[1][1] - points[0][1];
    int dy3 = points[2][1] - points[1][1];
    int dx2 = points[1][0] - points[0][0];
    int dx3 = points[2][0] - points[1][0];
    return dy2*dx3 != dy3*dx2;
}
int main(){
    vector<vector<int>> points = {{{1,1},{2,3},{3,2}}};
    cout<<isBoomerang(points)<<endl;
    return 0;
}