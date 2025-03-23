#include <iostream>
using namespace std;
int maxContainers(int n, int w, int maxWeight) {
    int cells = n*n;
    int weight = cells * w;
    if(weight <= maxWeight) return cells;
    while(weight > maxWeight){
        --cells;
        weight = cells * w;
    }
    return cells;
}
int main(){
    int n,w,maxWeight;
    cin>>n>>w>>maxWeight;
    cout<<maxContainers(n,w,maxWeight)<<endl;

    return 0;
}