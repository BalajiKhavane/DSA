#include <iostream>
using namespace std;
int theMaximumAchievableX(int num, int t) {
    return num + (t*2);
}
int main(){
    int num, t;
    cout<<"Enter the value of num and t :"<<endl;
    cin>>num>>t;
    cout<<theMaximumAchievableX(num, t)<<endl;

    return 0;
}