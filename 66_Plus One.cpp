#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
vector<int> plusOne(vector<int>& digits){
    int n=digits.size()-1;
    for(int i=n;i>=0;i--){
        if(digits[i] < 9){
            ++digits[i];
            return digits;
        }
        digits[i]=0;
    }
    digits.insert(digits.begin(),1);

    return digits;
}

int main(){
    vector<int> digits={4,3,2,9};
    plusOne(digits);
    for(int i : digits){
        cout<<"\t"<<i;
    }

    return 0;
}