#include <bits/stdc++.h>
using namespace std;

int func (vector <vector <int>> dp, int i, int j)  {
    if (dp[i][j] != -1) return dp[i][j];
    if (i == 0 && j == 0) return dp[0][0] = 1;
    if (i < 0 || j < 0) return 0;
    int up = func (dp, i-1, j);
    int left = func (dp, i, j-1);
    return dp[i][j] = up+left;
}

int main () { 
    
    return 0;
}