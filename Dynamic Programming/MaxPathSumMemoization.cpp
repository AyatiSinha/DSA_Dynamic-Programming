#include <bits/stdc++.h>
using namespace std;

int func (vector <vector <int>> &vec) {
    int m = vec[0].size();
    int n = vec.size();
    int maxi = INT_MIN;
    vector <vector<int>> dp (n, vector <int> (m, -1));
    for (int i = 0; i < m; i++)
    {
        maxi = max (maxi, func2(vec, dp, n-1, i));
    }
    return maxi;
}

int func2 (vector <vector<int>> &vec, vector <vector <int>> &dp, int i, int j) {
    int m = vec[0].size();
    if (j < 0 || j >= m) return INT_MIN;
    if (dp[i][j] != -1) return dp[i][j];
    if (i == 0) return dp[i][j] = vec[i][j];
    else {
        int up = vec[i][j] + func2 (vec, dp, i-1, j);
        int leftup = vec[i][j] + func2 (vec, dp, i-1, j-1);
        int rightup = vec[i][j] + func2 (vec, dp, i-1, j+1);
        return dp[i][j] = max (up, max(leftup, rightup));
    }
}

int main () { 
    
    return 0;
}