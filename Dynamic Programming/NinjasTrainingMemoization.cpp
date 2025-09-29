#include <bits/stdc++.h>
using namespace std;

int func (vector <vector <int>> vec, vector <vector <int>> dp, int day, int prev) {
    if (day == 0) {
        if (dp[0][prev] != -1) return dp[0][prev];
        int maxi = 0;
        for (int i = 0; i <= 2; i++)
        {
            if (i != prev) {
                maxi = max (maxi, vec[0][i]);
            }
        }
        return dp[0][prev] = maxi;
    }
    if (dp[day][prev] != -1) return dp[day][prev];
    int maxi = 0;
    for (int  i = 0; i <= 2; i++)
    {
        if (i != prev) {
            int point = vec[day][i] + func (vec, dp, day-1, i);
            maxi = max (maxi, point);
        }
    }
    return dp[day][prev] = maxi;
}

int main () { 
    vector <vector <int>> vec = {{2,1,3},{3,4,6},{10,1,6},{8,3,7}};
    vector <vector <int>> dp (4, vector <int> (4, -1));
    cout << func(vec, dp, vec.size()-1, 3) << endl;
    return 0;
}