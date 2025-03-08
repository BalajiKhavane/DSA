#include <iostream>
#include <string>
using namespace std;
int minimumRecolors(string blocks, int k) {
    int min_cnt = k;
    for(int i=0;i<=blocks.length()-k;i++){
        int count = 0;
        for(int j=i;j<i+k;j++){
            if(blocks[j] == 'W'){
                count++;
            }
        }
        min_cnt = min(min_cnt, count);
    }
    return min_cnt;
}
int main(){
    int k = 7;
    string blocks = "WBBWWBBWBW";
    cout<<minimumRecolors(blocks,k)<<endl;
    
    k=2;
    blocks = "WBWBBBW";
    cout<<minimumRecolors(blocks,k)<<endl;

    return 0;
}