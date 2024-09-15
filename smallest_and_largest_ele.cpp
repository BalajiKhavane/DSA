#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the total no. of elements :"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements :"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Entered elements are:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }cout<<endl;

    int min=a[0],max=a[0];
    for(int i=1;i<n;i++){
        if(min>a[i]){
            min=a[i];
        } 
        if(max<a[i]){
            max=a[i];
        }
    }
    cout<<"Smallest element in Array :"<<min<<endl;
    cout<<"largest element in Array :"<<max<<endl;
    
    return 0;
}