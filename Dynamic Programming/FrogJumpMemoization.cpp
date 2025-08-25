#include <bits/stdc++.h>
using namespace std;

int func (int index, vector <int> &height, vector <int> &dp) {
    if (index == 0) return 0;
    if (index == 1) return dp[1] = abs (height[1] - height[0]);
    if (dp [index] != -1) return dp[index];
    int one = func (index-1, height, dp) + abs(height[index] - height[index-1]);
    int two = func (index-2, height, dp) + abs(height[index] - height[index-2]);
    return dp[index] = min(one, two);
}

int main () { 
    int n = 6;
    vector <int> height = {30, 10, 60, 10, 60, 50};
    vector <int> dp(n+1, -1);
    cout << func (n-1, height, dp) << endl;
    return 0;
}