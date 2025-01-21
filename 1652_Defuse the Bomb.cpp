#include <iostream>
#include <vector>
using namespace std;
vector<int> decrypt(vector<int>& code, int k) {
    int N = code.size();
    vector<int> res(N, 0);
    
    for (int i = 0; i < N; i++) {
        if (k > 0) {
            for (int j = i + 1; j < i + 1 + k; j++) {
                res[i] += code[j % N];
            }
        }
        else if (k < 0) {
            for (int j = i - 1; j > i - 1 - abs(k); j--) {
                res[i] += code[((j % N) + N) % N];
            }
        }
    }
    return res;
}
int main(){
    vector<int> code,result;
    int k = 3;
    code = {5,7,1,4};
    result = decrypt(code,k);

    for(auto i : result){
        cout<<i<<"\t";
    }cout<<endl;

    return 0;
}