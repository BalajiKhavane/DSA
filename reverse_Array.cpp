#include <iostream>
using namespace std;
void reverse(int a[],int size){
    int i=0,j=size-1;
    while(i<j){
        if(a[i] != a[j]){
            swap(a[i],a[j]);
            i++;j--;
        }
    }
    cout<<"Reversed array :"<<endl;
    for(i=0;i<size;i++){
        cout<<a[i]<<"\t";
    }
}

int main(){
    int a[]={20,40,10,50,60};
    int size=sizeof(a)/sizeof(a[0]);
    reverse(a,size);

    return 0;
}