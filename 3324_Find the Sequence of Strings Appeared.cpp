#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> stringSequence(string target){
    vector<string> vec;
    string ans;
    for(int i=0;i<target.length();i++){
        for(char ch='a';ch<=target[i];ch++){
            vec.push_back(ans + ch);
        }
        ans.push_back(target[i]);              //appending char to the ans
    }

    return vec;
}
int main(){
    string str;
    vector<string> result;
    cout<<"Enter a string :"<<endl;
    cin>>str;
    result=stringSequence(str);
    for(string i : result){
        cout<<"\t"<<i;
    }

    return 0;
}