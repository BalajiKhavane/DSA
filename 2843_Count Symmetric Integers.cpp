#include <iostream>
#include <string>
using namespace std;
int countSymmetricIntegers(int low, int high) {
    int count = 0;
    for(int i=low;i<=high;i++){
        string temp = to_string(i);
        int n = temp.size()-1;
        if(n%2 == 0) continue;
        int j = 0, left = 0, right = 0;
        while(j < n){
            left += (temp[j] - '0');
            right += (temp[n] - '0');
            j++;n--;
        }
        if(left == right){
            count++;
        }
    }
    return count;
}
int main(){
    int low, high;
    cout<<"Enter Low and high :"<<endl;
    cin>>low>>high;
    cout<<countSymmetricIntegers(low,high)<<endl;

    return 0;
}