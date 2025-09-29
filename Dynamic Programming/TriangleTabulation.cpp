#include <bits/stdc++.h>
using namespace std;

int func (vector <vector <int>>& vec) {
    int n = vec.size();
    vector <vector <int>> dp (n, vector <int> (n, -1));
    for (int i = 0; i < n; i++)
    {
        dp[n-1][i] = vec[n-1][i];
    }
    for (int i = n-2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            int down = vec[i][j] + dp[i+1][j];
            int diagonal = vec[i][j] + dp[i+1][j+1];
            dp[i][j] = min(down, diagonal);
        }
    }
    return dp[0][0];
}

int main () { 
    
    return 0;
}