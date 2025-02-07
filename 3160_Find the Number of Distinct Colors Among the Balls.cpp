#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> queryResults(int limit, vector<vector<int>>& queries) {
    int n = queries.size();
    vector<int> result(n);
    unordered_map<int, int> colorMap, ballMap;

    // Iterate through queries
    for (int i = 0; i < n; i++) {
        // Extract ball label and color from query
        int ball = queries[i][0], color = queries[i][1];

        // Check if ball is already covered
        if (ballMap.find(ball) != ballMap.end()) {
            // Decrement count of the previous color on the ball
            int prevColor = ballMap[ball];
            colorMap[prevColor]--;

            // If there are no balls with previous color left, remove color
            // from color map
            if (colorMap[prevColor] == 0) colorMap.erase(prevColor);
        }
        // Set color of ball to the new color
        ballMap[ball] = color;

        // Increment the count of the new color
        colorMap[color]++;

        result[i] = colorMap.size();
    }

    return result;
}
int main(){
    vector<vector<int>> queries;
    vector<int> result;
    int limit = 4;
    queries = {{1,4},{2,5},{1,3},{3,4}};
    result = queryResults(limit, queries);
    limit = 4; 
    queries = {{0,1},{1,2},{2,2},{3,4},{4,5}};
    result = queryResults(limit, queries);

    for(auto i : result){
        cout<<i<<"\t";
    }cout<<endl;

    return 0;
}