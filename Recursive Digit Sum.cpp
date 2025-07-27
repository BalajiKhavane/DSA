#include <iostream>
using namespace std;
int digitSum(int num){
    if(num == 0 or num == 1){
        return num;
    }

    return num%10 + digitSum(num/10);
}
int main(){
    int num;
    cout<<"Enter the number :"<<endl;
    cin>>num;
    cout<<digitSum(num)<<endl;

    return 0;
}