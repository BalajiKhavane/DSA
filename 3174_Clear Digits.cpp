#include <iostream>
#include <stack>
#include <string>
using namespace std;
string clearDigits(string s) {
    string stack;
    for (char ch : s) {
        if (isdigit(ch)) {
            if (!stack.empty()) stack.pop_back();
        } else {
            stack.push_back(ch); 
        }
    }
    return stack;
}

int main(){
    string s = "cb34";
    cout<<clearDigits(s);
    return 0;
}