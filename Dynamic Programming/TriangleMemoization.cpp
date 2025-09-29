#include <bits/stdc++.h>
using namespace std;

int func (vector <vector <int>>& vec, vector <vector <int>>& dp, int i, int j) {
    int n = vec.size();
    if (dp[i][j] != -1) return dp[i][j];
    if (i == n-1) return dp[i][j] = vec[i][j];
    else {
        int down = vec[i][j] + func (vec, dp, i+1, j);
        int dg = vec[i][j] + func (vec, dp, i+1, j+1);
        return dp[i][j] = min (dg, down);
    }
}

int main () { 
    
    return 0;
}