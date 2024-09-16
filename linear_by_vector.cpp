#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec;
    vec.push_back(42);
    vec.push_back(41);
    vec.push_back(39);
    vec.push_back(28);
    vec.push_back(23);

    for(int i :vec){
        cout<<i<<"\t";
    }

    int key,count=0;
    cout<<"\nEnter the key element :"<<endl;
    cin>>key;

    for(int i: vec){
        if(i==key){
            cout<<"Search is successful element found at "<<count+1<<" location"<<endl;
            break;
        }
        count++;
    }
    if(count==vec.size()){
        cout<<"Search is unsuccessful"<<endl;
    }
    return 0;
}