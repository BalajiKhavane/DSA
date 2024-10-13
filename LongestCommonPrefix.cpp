#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
    sort(strs.begin(),strs.end());
    int i=0,j=strs.size()-1;
    string ans="";
    for(int k=0;k<min(strs[i].size(),strs[j].size());k++){
        if(strs[i][k] == strs[j][k]){
            ans += strs[i][k];
        }else{
            return ans;
        }
    }
}
int main(){
    vector<string> strs;
    cout<<"Enter the strings or Fullstop for stop : "<<endl;
    string el ="";
    while(true){
        cin>>el;
        if(el=="."){
            break;
        }else{
            strs.push_back(el);
        }
    }
    cout<<longestCommonPrefix(strs)<<endl;
    return 0;
}