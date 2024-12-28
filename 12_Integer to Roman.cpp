#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
string intToRoman(int num) {
    string ans;
    while(num > 0){
        int temp = num;
        if(num >= 1000){
            temp /= 1000;
            for(int i=0;i<temp;i++){
                ans += "M";
                num %= 1000;
            }
        }else if(num >= 900){
            temp /= 900;
            for(int i=0;i<temp;i++){
                ans += "CM";
                num %= 900;
            }
        }else if(num >= 500){
            temp /= 500;
            for(int i=0;i<temp;i++){
                ans += "D";
                num %= 500;
            }
        }else if(num >= 400){
            temp /= 400;
            for(int i=0;i<temp;i++){
                ans += "CD";
                num %= 400;
            }
        }else if(num >= 100){
            temp /= 100;
            for(int i=0;i<temp;i++){
                ans += "C";
                num %= 100;
            }
        }else if(num >= 90){
            temp /= 90;
            for(int i=0;i<temp;i++){
                ans += "XC";
                num %= 90;
            }
        }else if(num >= 50){
            temp /= 50;
            for(int i=0;i<temp;i++){
                ans += "L";
                num %= 50;
            }
        }else if(num >= 40){
            temp /= 40;
            for(int i=0;i<temp;i++){
                ans += "XL";
                num %= 40;
            }
        }else if(num >= 10){
            temp /= 10;
            for(int i=0;i<temp;i++){
                ans += "X";
                num %= 10;
            }
        }else if(num >= 9){
            temp /= 9;
            for(int i=0;i<temp;i++){
                ans += "IX";
                num %= 9;
            }
        }else if(num >= 5){
            temp /= 5;
            for(int i=0;i<temp;i++){
                ans += "V";
                num %= 5;
            }
        }else if(num >= 4){
            temp /= 4;
            for(int i=0;i<temp;i++){
                ans += "IV";
                num %= 4;
            }
        }else{
            for(int i=0;i<temp;i++){
                ans += "I";
                num %= 1;
            }
        }
    }
    return ans;
}
int main(){
    int num;
    cout<<"Enter the number :"<<endl;
    cin>>num;
    cout<<intToRoman(num)<<endl;

    return 0;
}