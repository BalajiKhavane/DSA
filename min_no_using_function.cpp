#include <iostream>
using namespace std;
void min(int a ,int b){
    if(a>b){
        cout<<"second number is minimum."<<endl;
    }else{
        cout<<"first number is minimum."<<endl;
    }
}

int main(){
    min(3,2);
    return 0;
}