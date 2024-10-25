#include <iostream>
#include <set>
using namespace std;
int lengthOfLongestSubstring(string s){
    set<int> set;
    int j=0,count=0;
    for(int i=0;i<s.size();i++){
        while(set.find(s[i]) != set.end()){
            set.erase(s[j]);
            j++;
        }
        set.insert(s[i]);
        count= max(count,i-j+1);
    }           
    return count;         
}                              
int main(){
    string s;
    cout<<"Enter a string :"<<endl;
    cin>>s;
    cout<<lengthOfLongestSubstring(s);
    return 0;
}