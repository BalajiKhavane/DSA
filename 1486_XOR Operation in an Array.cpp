#include <iostream>
using namespace std;

int xorOperation(int n, int start) {
    int ans = 0;
    for(int i=0;i<n;i++){
        int temp = start + 2*i;
        ans ^= temp;
    }
    return ans;
}

int main(){
    int n = 5, start = 0;
    cout<<xorOperation(n,start)<<endl;
    n = 4, start = 3;
    cout<<xorOperation(n,start)<<endl;
    return 0;
}