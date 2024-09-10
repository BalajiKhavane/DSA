#include <iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter the no. of columns :"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        char j;
        for(j='A';j<='D';j++){
            cout<<j<<"\t";
        }
        cout<<endl;
    }

    return 0;
}