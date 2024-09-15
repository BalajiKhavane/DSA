#include <iostream>
#include <vector>
using namespace std;
void reverse(vector <int> &vec){             //'&' for changes apply in main funtion.
    int i=0;
    int j=vec.size()-1;
    while(i<j){
        swap(vec[i],vec[j]);i++;j--;
    }
}

int main(){
    vector <int> vec={18,26,29,31,41};
    reverse(vec);
    for(int i: vec){
        cout<<i<<"\t";
    }
    return 0;
}