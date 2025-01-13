#include <iostream>
#include <string>
#include <map>
using namespace std;
int minimumLength(string s){
    if(s.size()<3) return s.size();
    map<char,int> map;
    for(auto i : s) map[i]++;
    int count = 0;
    for(auto i : map){
        if(i.second%2 == 0){
            count += 2;
        }else{
            count += 1;
        }
    }
    return count;
}
int main(){
    string s = "abaacbcbb";
    cout<<minimumLength(s)<<endl;

    return 0;
}