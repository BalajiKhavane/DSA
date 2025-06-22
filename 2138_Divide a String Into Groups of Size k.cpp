#include <iostream>
#include <vector>
using namespace std;
vector<string> divideString(string s, int k, char fill) {
    int count = 0;
    vector<string> ans;

    string temp;
    for(int i=0;i<s.size();i++){
        temp += s[i];
        count++;
        if(count == k){
            ans.push_back(temp);
            temp = "";
            count = 0;
        }
    }

    if(count == 0) return ans;

    while(count != k){
        temp += fill;
        count++;
    }
    ans.push_back(temp);

    return ans;
}
int main(){
    int k = 3;
    char fill = 'x';
    string s = "abcdefghi";
    vector<string> result;

    result = divideString(s,k,fill);
    for(auto i : result){
        cout<<i<<"\t";
    }cout<<endl;

    s = "abcdefghij";

    result = divideString(s,k,fill);
    for(auto i : result){
        cout<<i<<"\t";
    }cout<<endl;
    
    return 0;
}