#include <iostream>
#include <string>
using namespace std;
bool canChange(string start, string target) {
    int i = 0, j = 0, n = start.size();
    while (i < n && j < n) {
        while (i < n && start[i] == '_') i++;
        while (j < n && target[j] == '_') j++;
        if (i == n || j == n) break;
        if (start[i] != target[j]) return false;
        // Validate movement rules
        if (start[i] == 'R' && i > j) return false;
        if (start[i] == 'L' && i < j) return false;
        // Move both indices forward
        i++;
        j++;
    }
    // Ensure remaining characters in both strings are underscores
    while (i < n && start[i] == '_') i++;
    while (j < n && target[j] == '_') j++;

    return i == n && j == n;
}

int main(){
	string start = "_L__R__R_", target = "L______RR";
	cout<<canChange(start,target)<<endl;
	start = "R_L_", target = "__LR";
	cout<<canChange(start,target)<<endl;
	start = "_R", target = "R_";
	cout<<canChange(start,target)<<endl;

	return 0;
}