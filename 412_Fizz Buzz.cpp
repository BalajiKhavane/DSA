#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> fizzBuzz(int n) {
    vector<string> ans;
    for(int i=1;i<=n;i++){
        if(i%3 == 0 and i%5 == 0){
            ans.push_back("FizzBuzz");
        }else if(i%3 == 0){
            ans.push_back("Fizz");
        }else if(i%5 == 0){
            ans.push_back("Buzz");
        }else{
            ans.push_back(to_string(i));
        }
    }
    return ans;
}
int main(){
    int n;
    vector<string> result;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    result = fizzBuzz(n);
    for(auto i : result){
        cout<<i<<'\t';
    }cout<<endl;

    return 0;
}