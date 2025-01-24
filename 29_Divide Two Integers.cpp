#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int divide(int dividend, int divisor) {
    if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX;
    }
    bool isNegative = (dividend < 0) ^ (divisor < 0);

    long long dividend1 = abs((long long)dividend);
    long long divisor1 = abs((long long)divisor);

    long long result = 0;

    while (dividend1 >= divisor1) {
        long long temp = divisor1, multiple = 1;
        while (dividend1 >= (temp << 1)) {
            temp <<= 1;
            multiple <<= 1;
        }
        dividend1 -= temp;
        result += multiple;
    }
    result = isNegative ? -result : result;
    return (result > INT_MAX) ? INT_MAX : (int)result;
}
int main(){
    int dividend = 10, divisor = 3;
    cout<<divide(dividend, divisor)<<endl;

    dividend = 7, divisor = -3;
    cout<<divide(dividend, divisor)<<endl;

    return 0;
}
