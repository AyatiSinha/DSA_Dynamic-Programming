#include <bits/stdc++.h>
using namespace std;

int func (vector <vector <int>> &mat, vector <vector <int>> &dp, int i, int j) {
    if (i < 0 || j < 0) return INT_MAX;
    if (dp[i][j] != -1) return dp[i][j];
    if (i == 0 && j == 0) return dp[i][j] = mat[i][j];
    else {
        int up = mat[i][j] + func (mat, dp, i-1, j);
        int left = mat[i][j] + func (mat, dp, i, j-1);
        return dp[i][j] = min (up, left);
    }
}

int main () { 
    
    return 0;
}