#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int mostWordsFound(vector<string>& sentences) {
    int maxcount = 0;
    for(auto& i : sentences){
        int count1 = count(i.begin(),i.end(),' ');
        maxcount = max(maxcount, count1);
    }
    return maxcount+1;
}

int main(){
    vector<string> sentences = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
    cout<<mostWordsFound(sentences)<<endl;
    sentences = {"please wait", "continue to fight", "continue to win"};
    cout<<mostWordsFound(sentences)<<endl;

    return 0;
}