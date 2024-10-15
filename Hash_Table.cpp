#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main(){
    unordered_map<string,int> Hashmap;      //defination of unordered_map

    //Insertion
    Hashmap["Balaji"]=98;
    Hashmap["Shivtej"]=90;
    Hashmap["Chinmay"]=95;
    Hashmap["Vaibhav"]=87;

    Hashmap.insert(pair<string,int>("Vivek",64));
    Hashmap.insert(make_pair("Keshav",69));
    Hashmap.insert(make_pair("Ravi",99));

    //Deletion
    Hashmap.erase("Keshav");
    Hashmap.erase("Ravi");

    //Printing Hashmap 
    for(auto i: Hashmap){
        cout<<i.first<<" "<<i.second<<endl;     //first -> keys     second -> values
    }

    return 0;
}