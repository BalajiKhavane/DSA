#include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle) {
    int n1= haystack.length();
    int n2= needle.size();
    if(n1 >= n2){
        for(int i=0;i<=n1-n2;i++){
            if(haystack.substr(i,n2) == needle){
                return i;
            }
        }
    }
    return -1;
    //return haystack.find(needle);
}

int main(){
    string s1,s2;
    cout<<"Enter a haystack :"<<endl;
    cin>>s1;
    cout<<"Enter a needle :"<<endl;
    cin>>s2;
    cout<<strStr(s1,s2);

    return 0;
}