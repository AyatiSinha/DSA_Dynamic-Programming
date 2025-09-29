#include <bits/stdc++.h>
using namespace std;

int func (vector <vector <int>> vec) {
    int n = vec.size();
    int m = vec[0].size();
    vector <vector <int>> dp(n, vector <int> (m,-1));
    for (int i = 0; i < m; i++)
    {
        dp[0][i] = vec[0][i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int up = vec[i][j] + dp[i-1][j];
            int leftup = j > 0? vec[i][j] + dp[i-1][j-1] : INT_MIN;
            int rightup = j < m-1? vec[i][j] + dp[i-1][j+1] : INT_MIN;
            dp[i][j] = max (up, max(rightup, leftup));
        }
    }
    return *max_element(dp[n-1].begin(), dp[n-1].end());
}

int main () { 
    
    return 0;
}