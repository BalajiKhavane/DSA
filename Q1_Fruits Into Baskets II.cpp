#include <iostream>
#include <vector>
using namespace std;
int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
    for(int i=0;i<fruits.size();i++){
        int j=0;
        while(j < baskets.size()){
            if(baskets[j] >=  0 and fruits[i] <= baskets[j]){
                baskets[j] *= -1;
                fruits[i] *= -1;
                break;
            }
            j++;
        }
    }

    int count = 0;
    for(int i : fruits){
        if(i >= 0){
            count++;
        }
    }
    return count;
}
int main(){
    vector<int> fruits,baskets;

    fruits = {4,2,5};
    baskets = {3,5,4};
    cout<<numOfUnplacedFruits(fruits,baskets)<<endl;
    
    fruits = {3,6,1};
    baskets = {6,4,7};
    cout<<numOfUnplacedFruits(fruits,baskets)<<endl;

}