#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of columns :"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=n;k>=i;k--){
            cout<<"  ";
        }
        for(int j=1;j<i*2;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}