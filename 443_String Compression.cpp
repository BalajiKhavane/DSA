#include <iostream>
#include <vector>
using namespace std;
int compress(vector<char>& chars){
    if(chars.size()==1) return 1;
    int idx=0;
    for(int i=0;i<chars.size();i++){
        int count = 0;
        char ch =chars[i];
        while(i < chars.size() && chars[i] == ch){
            count++;i++;
        }
        
        if(count == 1){
            chars[idx++] = ch;
        }else{
            chars[idx++] = ch;
            string str = to_string(count);
            for(char i : str){
                chars[idx] = i;
                idx++;
            }
        }
        i--;
    }
    chars.resize(idx);
    return chars.size();
}
int main(){
    vector<char> chars {'a','b','b','b','b','b','c','c'};
    cout<<compress(chars)<<endl;
    for(auto i : chars){
        cout<<i<<" ";
    }
    return 0;
}