#include <bits/stdc++.h>
using namespace std;

int func (vector <vector <int>> & mat, int i, int j) {
    vector <vector <int>> dp (i+1, vector <int> (j+1,0));
    dp[0][0] = mat[0][0];
    for (int r = 0; r <= i; r++)
    {
        for (int c = 0; c <= j; c++)
        {
            if (r == 0 && c == 0) continue;
            else {
                int up = INT_MAX, left = INT_MAX;
                if (r > 0) up = mat[r][c] + dp[r-1][c];
                if (c > 0) left = mat[r][c] + dp[r][c-1];
                dp[r][c] = min(up, left);
            }
        }
    }
    return dp[i][j];
}

int main () { 
    
    return 0;
}