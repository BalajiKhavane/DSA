#include <iostream>
#include <string>
#include <vector>
using namespace std;
void subsquence(string s,int m,string op){
    if(s.size() == m){
        cout<<op<<endl;
        return;
    }
    subsquence(s,m+1,op+s[m]);
}
int main(){
    vector<string> vec;
    string s,op;
    cout<<"Enter a string :"<<endl;
    cin>>s;
    subsquence(s,0,op);

    return 0;
}