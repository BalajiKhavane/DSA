#include <iostream>
#include <vector>
#include <set>
using namespace std;
int maxCount(vector<int>& banned, int n, int maxSum){
    set<int> set(banned.begin(),banned.end());
    int sum = 0, count = 0;
    for(int i=1;i<=n;i++){
        if(set.find(i) != set.end()) continue;
        else{
            sum += i;
            count++;
        }
        if(maxSum < sum) return --count;
    }
    return count;
}

int main(){
	vector<int> banned = {1,6,5};
	int n = 5, maxSum = 6;
	cout<<maxCount(banned, n, maxSum)<<endl;
	banned.clear();

	banned = {1,2,3,4,5,6,7};
	n = 8, maxSum = 1;
	cout<<maxCount(banned, n, maxSum)<<endl;
    banned.clear();
    
	banned = {11};
	n = 7, maxSum = 50;
	cout<<maxCount(banned, n, maxSum)<<endl;

	return 0;
}
