#include <iostream>
#include <string>
using namespace std;
string mergeAlternately(string word1, string word2) {
    string ans;
    int i=0,j=0;
    while(i < word1.size() && j < word2.size()){
        ans += word1[i];
        ans += word2[j];
        i++;j++;
    }
    while(i < word1.size()){
        ans += word1[i];
        i++;
    }
    while(j < word2.size()){
        ans += word2[j];
        j++;
    }
    
    return ans;
}
int main(){
    string word1 = "abc", word2 = "pqr";
    cout<<mergeAlternately(word1,word2)<<endl;
    
    word1 = "ab", word2 = "pqrs";
    cout<<mergeAlternately(word1,word2)<<endl;
    
    word1 = "abcd", word2 = "pq";
    cout<<mergeAlternately(word1,word2)<<endl;

    return 0;
}