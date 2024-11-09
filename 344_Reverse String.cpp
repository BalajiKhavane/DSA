#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void reverseString(vector<char>& s){
    reverse(s.begin(),s.end());
    for(auto i : s){
        cout<<"\t"<<i;
    }
}
int main(){
    vector<char> vec={'H','a','n','a','h'};
    reverseString(vec);

    return 0;
}