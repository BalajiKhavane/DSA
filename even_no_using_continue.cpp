#include <iostream>
using namespace std;
int main(){
    int i, n=10;
    for(i=1;i<=10;i++){
        if(i%2 != 0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}