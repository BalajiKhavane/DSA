#include <iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"Enter the number of columns :"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        for(k=n-1;k>=i;k--){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}