//26. Remove Duplicates from Sorted Array

#include <iostream>
#include <vector>
using namespace std;

void removeDuplicates(vector <int>& arr){
	int size= arr.size();
	vector <int> vec;
	for(int i=1;i<=size;i++){
		if(arr[i]==arr[i-1]){
			
		}else{
			vec.push_back(arr[i-1]);
		}
	}	
	cout<<vec.size()<<endl;
	for(int i: vec){
		cout<<i<<"\t";
	}
}

int main(){
    vector <int> arr={0,0,1,1,1,2,2,3,3,4};
    removeDuplicates(arr);
    return 0;
}