#include <iostream>
using namespace std;
int main(){
    int marks[5]={90,95,83,86,91};       //Initialize Array       
    int size= sizeof(marks)/sizeof(marks[0]);       //  5*4/4=5
    cout<<"The size of Array is :"<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<marks[i]<<endl;
    }
    return 0;
}