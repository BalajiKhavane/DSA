/*  Funtions:   
        Suppose name of vector is vec.
        1)vec.push_back(val): Add the element at the end of vector.
        2)vec.pop_back(): Remove the last element in the vector.
        3)vec.front(): Return the first element in the vector.
        4)vec.back(): Return the last element in the vector.
        5)vec.at(val): Return the value of index element in the vector. 
        6)vec.size(): Return the size of vector.
        7)vec.capacity(): Return the capacity of vector.
*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec;
    vec.push_back(10);      //10 added
    vec.push_back(20);      //20 added
    vec.push_back(30);      //30 added
    vec.push_back(40);      //40 added

    for(int i: vec){        //Printing Vector
        cout<<i<<'\t';
    }
    cout<<endl;

    vec.pop_back();         //40 removed 
    for(int i: vec){        //Printing Vector
        cout<<i<<'\t';
    }
    cout<<endl;

    cout<<vec.front()<<endl;    //10
    cout<<vec.back()<<endl;    //30
    cout<<vec.at(2)<<endl;    //30
    
    return 0;
}