/*
        1   2   3
        4   5   6
        7   8   9
*/
#include <iostream>
using namespace std;
int main(){
    int i,j,n,num=1;
    cout<<"Enter the no. of colunms :"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}