#include <iostream>
#include <vector>
#include <string>
using namespace std;
char findKthBit(int n, int k) {
    vector<string> s;
    s.push_back("0");
    s.push_back("011");
    s.push_back("0111001");
    s.push_back("011100110110001");
    return (s[n-1][k-1]);
}
int main(){
    int n,k;
    cout<<"Enter n and k :"<<endl;
    cin>>n>>k;
    cout<<findKthBit(n,k)<<endl;

    return 0;
}