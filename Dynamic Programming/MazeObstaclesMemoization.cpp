#include <bits/stdc++.h>
using namespace std;

int func (const vector <vector<int>> &mat, vector <vector<int>> &dp, int i, int j) {
    if (i < 0 || j < 0) return 0;
    if (dp[i][j] != -1) return dp[i][j];
    if (mat[i][j] == -1) return dp[i][j] = 0;
    if (i == 0 && j == 0) return dp[i][j] = 1;
    int up = func (mat, dp, i-1, j);
    int left = func (mat, dp, i, j-1);
    return dp[i][j] = up+left;
}

int main () { 
    
    return 0;
}