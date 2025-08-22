#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

string evaluate(string s, vector<vector<string>>& knowledge) {
    unordered_map<string,string> umap;
    for(auto it : knowledge) umap[it[0]] = it[1]; 
    
    int st = 0;
    string ans;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '(') {
            st = i + 1;
            while(i < s.size() && s[i] != ')') {
                i++;
            }
            string temp = s.substr(st, i - st);
            if(umap.find(temp) != umap.end()) {
                ans += umap[temp];
            } else {
                ans.push_back('?');
            }
        } else {
            ans += s[i];
        }   
    }
    return ans;
}

int main() {
    string s = "(name)is(age)yearsold";
    vector<vector<string>> knowledge = {
        {"name", "bob"},
        {"age", "two"}
    };

    cout << evaluate(s, knowledge) << endl;  
    // Expected output: "bobistwoyearsold"

    return 0;
}
