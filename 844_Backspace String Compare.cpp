#include <iostream>
#include <stack>
using namespace std;
bool backspaceCompare(string s, string t){
    stack<char> stack1,stack2;
    for(auto it: s){
        if(it != '#'){
            stack1.push(it);
        }else if(!stack1.empty()){
            stack1.pop();
        }
    }

    for(auto it : t){
        if(it != '#'){
            stack2.push(it);
        }else if(!stack2.empty()){
            stack2.pop();
        }
    }

    while(!stack1.empty() && !stack2.empty()){
        if(stack1.top() != stack2.top()){
            return false;
        }
        stack1.pop();
        stack2.pop();
    }

    return stack1.empty() && stack2.empty();
}

int main(){
    string s,t;
    cout<<"Enter string1 :"<<endl;
    cin>>s;
    cout<<"Enter string2 :"<<endl;
    cin>>t;
    cout<<backspaceCompare(s,t);

    return 0;
}