#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isValid(string s) {
    stack<char> stack;
    for(auto i : s){
        if(i=='(' or i=='[' or i=='{'){
            stack.push(i);
        }else{
            if(!stack.empty() and stack.top()=='(' and i==')'){
                stack.pop();
            }
            else if(!stack.empty() and stack.top()=='[' and i==']'){
                stack.pop();
            }
            else if(!stack.empty() and stack.top()=='{' and i=='}'){
                stack.pop();
            }
            else{
                return false;
            }
        }
    }
    return stack.empty();
}
int main(){
    string s1 = "([]){}";
    string s2 = "}";
    string s3 = "{}";

    cout<<isValid(s1)<<endl;    
    cout<<isValid(s2)<<endl;    
    cout<<isValid(s3)<<endl;    

    return 0;
}