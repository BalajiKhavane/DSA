#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int lengthOfLastWord(string s){
    int n=s.length()-1;
    while(s[n]==' '){
        n--;
    }

    int count=0;
    while(true){
        if(s[n] != ' '){
            count++;
            n--;
        }else{
            break;
        }
    }
    return count++;
}

int main(){
    string str;
    cout<<"Enter full line string :"<<endl;
    getline(cin,str);
    cout<<lengthOfLastWord(str);

    return 0;
}