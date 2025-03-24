#include <iostream>
#include <set>
#include <vector>
using namespace std;
string destCity(vector<vector<string>>& paths) {
    set<string> set;
    for(int i=0;i<paths.size();i++){
        set.insert(paths[i][0]);
    }
    for(int i=0;i<paths.size();i++){
        if(set.find(paths[i][1]) == set.end()){
            return paths[i][1];
        }
    }
    return "";
}
int main(){
    vector<vector<string>> paths = {{"London","New York"},{"New York","Lima"},{"Lima","Sao Paulo"}};
    cout<<destCity(paths)<<endl;

    return 0;
}