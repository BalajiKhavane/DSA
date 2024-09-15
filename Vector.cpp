#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec;       //Definition of Vector
    cout<<vec.size()<<endl;         //0
    cout<<vec.capacity()<<endl;     //0
    vec={20,14,29,12};      //Initialization of Vector

    for(int i: vec){
        cout<<i<<"\t";      //20 14 29 12
    }
    cout<<endl;

    vector <int> vec2(5,1);     //Initialization of Vector
    for(int i: vec2){
        cout<<i<<"\t";      //1 1 1 1 1 
    }

    return 0;
}