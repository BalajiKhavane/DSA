#include <iostream>
#include <string>
using namespace std;
string capitalizeTitle(string title){
    string result;
    title.push_back(' ');
    for(int i=0;i<title.size();i++){
        string ans = "";
        while(title[i] != ' '){
            ans += title[i];
            i++;
        }
        if(ans.size() <= 2){
            for(auto &i: ans){
                i = tolower(i);
            }
        }else{
            ans[0]= toupper(ans[0]);
            for(int i=1;i<ans.size();i++){
                ans[i] = tolower(ans[i]);
            }
        }
        result += ans + ' ';
    }
    if(!result.empty()){
        result.pop_back();
    }
    return result;
}

int main(){
    string title = "i Am capiTalIze tHe titLe";
    cout<<capitalizeTitle(title);
    return 0;
}