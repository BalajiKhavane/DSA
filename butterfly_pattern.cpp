#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of columns :"<<endl;
    cin>>n;
    for(int i=1;i<=n;i+=1){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        for(int k=n-1;k>=i;k--){
            cout<<"  ";
        }
        for(int l=n-1;l>=i;l--){
            cout<<"  ";
        }
        for(int m=1;m<=i;m++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    for(int i=1;i<=n;i+=1){
        for(int j=n;j>=i;j--){
            cout<<"* ";
        }
        for(int k=1;k<=i-1;k++){
            cout<<"  ";
        }
        for(int l=1;l<=i-1;l++){
            cout<<"  ";
        }
        for(int m=n;m>=i;m--){
            cout<<"* ";
        }
        cout<<endl;
    }


    

    return 0;
}