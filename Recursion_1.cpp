#include <iostream>
using namespace std;
void numbers_to_n(int n){
    if(n == 0){
        return;
    }                   // Base Case

    numbers_to_n(n-1);  // Recursive Call
    cout<<n<<"\t";
}
int main(){
    numbers_to_n(5);
    numbers_to_n(4);
    
    return 0;
}