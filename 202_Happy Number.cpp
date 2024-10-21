#include <iostream>
#include <set>
using namespace std;
bool isHappy(int n){
    set<int> set;
    while(n != 1 && set.find(n) == set.end()){
        set.insert(n);
        int ans=0;
        while(n>0){
            int rem = n%10;
            ans += rem * rem;
            n /= 10;
        }
        n=ans;
    }
    return n==1;
}
int main(){
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    cout<<isHappy(n);

    return 0;
}