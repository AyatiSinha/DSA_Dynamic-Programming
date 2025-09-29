#include <bits/stdc++.h>
using namespace std;

int func (int i, int j) {
    vector <vector<int>> dp(i+1, vector <int> (j+1, 0));
    for (int r = 0; r <= i; r++)
    {
        for (int c = 0; c <= j; c++)
        {
            if (r == 0 && c == 0) dp[r][c] = 1;
            else {
                int up = 0, left = 0;
                if (r > 0) up = dp[r-1][c];
                if (c > 0) left = dp[r][c-1];
                dp[r][c] = up+left;
            }
        }
    }
    return dp[i][j];
}

int main () { 
    
    return 0;
}