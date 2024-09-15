#include <iostream>
using namespace std;

void linearSearch(int a[],int size,int key){
    int flag=0;
    for(int i=0;i<size;i++){
        if(key==a[i]){
            cout<<"Search is successful element found at "<<i+1<<" location"<<endl;
            flag=1;
            break;
        }else{
            flag=0;
        }
    }
    if(flag == 0){
        cout<<"Search is unsuccessful"<<endl;
    }
    
}
int main(){
    int n,key;
    cout<<"Enter the number of elements :"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements :"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the key element :"<<endl;
    cin>>key;
    linearSearch(a,n,key);

    return 0;
}