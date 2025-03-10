#include <iostream>
#include <string>
using namespace std;
int maximum69Number (int num) {
    string s = to_string(num);
    for(int i=0;i<s.size();i++){
        if(s[i] == '6'){
            s[i] = '9';
            break;
        }
    }
    return stoi(s);
}
int main(){
    int num;
    num = 9669;
    cout<<maximum69Number(num)<<endl;
    
    num = 9996;
    cout<<maximum69Number(num)<<endl;
    
    num = 9999;
    cout<<maximum69Number(num)<<endl;

    return 0;
}