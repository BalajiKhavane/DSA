#include <iostream>
#include <vector>
using namespace std;
bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
    return !(rec1[2]<=rec2[0]||rec1[3]<=rec2[1]||rec1[0]>=rec2[2]||rec1[1]>=rec2[3]);
}
int main(){
    vector<int> rec1,rec2;
    rec1 = {0,0,2,2}, rec2 = {1,1,3,3};
    cout<<isRectangleOverlap(rec1,rec2)<<endl;

    rec1 = {0,0,1,1}, rec2 = {1,0,2,1};
    cout<<isRectangleOverlap(rec1,rec2)<<endl;

    rec1 = {0,0,1,1}, rec2 = {2,2,3,3};
    cout<<isRectangleOverlap(rec1,rec2)<<endl;

    return 0;
}