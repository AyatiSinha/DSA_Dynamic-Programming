#include <bits/stdc++.h>
using namespace std;

int func (int index, vector <int> &height) {
    vector <int> dp (index+1, -1);
    dp[0] = 0;
    dp[1] = abs(height[1] - height[0]);
    for (int i = 2; i <= index; i++)
    {
        int one = dp[i-1] + abs(height[i] - height[i-1]);
        int two = dp[i-2] + abs(height[i] - height[i-2]);
        dp[i] = min(one, two);
    }
    return dp[index];
}

int main () { 
    int n = 6;
    vector <int> height = {30, 10, 60, 10, 60, 50};
    cout << func (n-1, height)<< endl;
    return 0;
}