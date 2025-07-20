#include <iostream>
using namespace std;
bool checkDivisibility(int n) {
    int num = n;
    int digit_sum = 0;
    int digit_product = 1;

    while(num > 0){
        digit_sum += num%10;
        digit_product *= num%10;
        num /= 10;
    }

    return n%(digit_sum + digit_product) == 0;
}
int main(){
    int num;
    cout<<"Enter number :"<<endl;
    cin>>num;
    cout<<checkDivisibility(num)<<endl;;

    return 0;
}