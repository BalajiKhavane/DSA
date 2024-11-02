#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool isCircularSentence(string sentence){
    if(sentence[0] != sentence[sentence.length()-1]) return false;
    for(int i=1;i<sentence.size()-1;i++){
        if(sentence[i]==' '){
            if(sentence[i-1] != sentence[i+1]) return false;
        }
    }
    return true;  
}
int main(){
    string sentense="leetcode exercises sound delightful";
    cout<<isCircularSentence(sentense)<<endl;
    return 0;
}