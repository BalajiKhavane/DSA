#include <iostream>
#include <string>
using namespace std;
void reverseString(string s, int m, int n){
    if(m >= n){
        cout<<s;
        return;
    }
    char temp = s[m];
    s[m] = s[n];
    s[n] = temp;
    reverseString(s,m+1,n-1);
}
int main(){
    string s;
    cout<<"Enter a string :"<<endl;
    cin>>s;
    reverseString(s,0,s.size()-1);

    return 0;
}