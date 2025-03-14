#include <iostream>
#include <string>
using namespace std;
int dayOfYear(string date) {
    int year = stoi(date.substr(0,4));
    int month = stoi(date.substr(5,7));
    int day = stoi(date.substr(8,date.size())),ans = 0;
    for(int i=1;i<month;i++){
        if(i == 1 or i==3 or i==5 or i==7 or i==8 or i==10 or i==12){
            ans += 31;
        }else if(i==4 or i==6 or i==9 or i==11){
            ans += 30;
        }else{
            if(year%4 == 0){
                if(year%100 != 0){
                    ans += 29;
                }else{
                    if(year%400 == 0){
                        ans += 29;
                    }else{
                        ans += 28;
                    }
                }
            }else{
                ans += 28;
            }
        }
    }
    return ans+day;
}
int main(){
    string date = "2019-01-09";
    cout<<dayOfYear(date)<<endl;
    
    date = "2019-02-10";
    cout<<dayOfYear(date)<<endl;

    return 0;
}