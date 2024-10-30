#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
string reverseWords(string s){
    vector<string> vec;
    string ans= "";
    for(int i=0;i<s.size();i++){
        if(s[i] != ' '){
            ans += s[i];
            if(i == s.size()-1){
                vec.push_back(ans);
            }
        }else{
            if(ans != ""){
                vec.push_back(ans);
            }
            ans = "";
        }
    }
    ans="";

    reverse(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        if(i == vec.size()-1){
            ans += vec[i];
        }else{
            ans += vec[i] + ' ';
        }
    }

    return ans;
}
int main(){
    string s;
    cout<<"Enter a string :"<<endl;
    getline(cin,s);
    cout<<reverseWords(s);

    return 0;
}