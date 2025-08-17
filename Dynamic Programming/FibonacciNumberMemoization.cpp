#include <bits/stdc++.h>
using namespace std;

int func (int n, vector <int> &dp) {
    if (n <= 1) return dp[n] = n;
    if (dp[n] != -1) return dp[n];
    dp[n] = func (n-1, dp) + func (n-2, dp);
    return dp[n];
}

int main () { 
    int n;
    cin >> n;
    vector <int> dp (n+1, -1);
    cout << func(n, dp) << endl;    
    return 0;
}