#include <bits/stdc++.h>
using namespace std;

int func (vector <vector <int>> vec) {
    int n = vec.size();
    vector <vector <int>> dp (n, vector <int> (4, -1));
    for (int i = 0; i < 4; i++)
    {
        dp[0][i] = 0;
        for (int j = 0; j < 3; j++)
        {
            if (j != i) {
                dp[0][i] = max (dp[0][i], vec[0][j]);
            }
        }
    }
    for (int day = 1; day < n; day++)
    {
        for (int last = 0; last < 4; last++)
        {
            dp[day][last] = 0;
            for (int temp = 0; temp < 3; temp++)
            {
                if (temp != last) {
                    dp[day][last] = max (dp[day][last], vec[day][temp] + dp[day-1][temp]);
                }
            }
        }
    }
    return dp[n-1][3];
}

int main () { 
    vector <vector <int>> vec = {{2,1,3},{3,4,6},{10,1,6},{8,3,7}};
    cout << func (vec) << endl;
    return 0;
}