#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
    int idx = 0, sum, min_sum = INT_MAX;
    vector<string> ans;

    unordered_map<string,int> umap;
    for(auto i : list2) {
        umap[i] = idx;
        idx++;
    }

    for(int i=0;i<list1.size();i++){
        if(umap.find(list1[i]) != umap.end()){
            sum = i + umap[list1[i]];
            if(min_sum > sum){
                ans.clear();
                ans.push_back(list1[i]);
                min_sum = sum;
            }else if(min_sum == sum){
                ans.push_back(list1[i]);
            }
        }
    }
    return ans;
}
int main(){
    vector<string> list1,list2,result;

    list1 = {"Shogun","Tapioca Express","Burger King","KFC"};
    list2 = {"Piatti","The Grill at Torrey Pines","Hungry Hunter Steakhouse","Shogun"};
    result = findRestaurant(list1,list2);

    for(auto i : result){
        cout<<i<<"\t";
    }cout<<endl;
    
    list1 = {"Shogun","Tapioca Express","Burger King","KFC"}; 
    list2 = {"KFC","Shogun","Burger King"};
    result = findRestaurant(list1,list2);
    
    for(auto i : result){
        cout<<i<<"\t";
    }cout<<endl;
    
    list1 = {"happy","sad","good"};
    list2 = {"sad","happy","good"};
    result = findRestaurant(list1,list2);

    for(auto i : result){
        cout<<i<<"\t";
    }cout<<endl;
    
    return 0;
}