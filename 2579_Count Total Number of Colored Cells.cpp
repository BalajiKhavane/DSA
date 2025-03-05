#include <iostream>
using namespace std;
long long coloredCells(int n) {
    long long ans = 0;
    for(int i=1;i<=n;i++){
        long long temp = (i*2)-1;
        if(i == n){ 
            ans *= 2;
            return ans + temp;
        }
        ans += temp;
    }
    return 1;
}
int main(){
    int n;
    cout<<"Enter number :"<<endl;
    cin>>n;
    cout<<coloredCells(n)<<endl;

    return 0;
}