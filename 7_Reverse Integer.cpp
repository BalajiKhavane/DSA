#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;
int reverse(int x) {
    int ans = 0;
    while (x != 0) {
        int rem = x % 10;
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10)) {
            return 0;
        }
        ans = ans * 10 + rem;
        x = x / 10;
    }
    return ans; 
}
int main(){
    int n;
    cout<<"Enter a num :"<<endl;
    cin>> n;
    cout<<reverse(n)<<endl;

    return 0;
}