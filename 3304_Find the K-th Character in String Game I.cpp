#include <iostream>
#include <string>
using namespace std;
char kthCharacter(int k) {
    string word = "a";
    while(word.size() < k){
        string temp;
        for(auto i : word){
            temp += ++i;
        }
        word += temp;
    }
    return word[k-1];
}
int main(){
    int k;
    cout<<"Enter the number :"<<endl;
    cin>>k;
    cout<<kthCharacter(k)<<endl;

    return 0;
}