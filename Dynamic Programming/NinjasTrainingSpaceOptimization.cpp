#include <bits/stdc++.h>
using namespace std;

int func (vector <vector <int>> &vec) {
    int n = vec.size();
    vector <int> dp (4, -1);
    for (int i = 0; i < 4; i++)
    {
        dp[i] = 0;
        for (int j = 0; j < 3; j++)
        {
            if (j != i) {
                dp[i] = max (dp[i], vec[0][j]);
            }
        }
    }
    vector <int> temp(4, -1);
    for (int day = 1; day < n; day++)
    {
        for (int last = 0; last < 4; last++)
        {
            temp[last] = 0;
            for (int k = 0; k < 3; k++)
            {
                if(k != last) {
                    temp[last] = max (temp[last], dp[k] + vec[day][k]);
                }
            }
        }
        dp = temp;
    }
    return dp[3];
}

int main () { 
    vector <vector <int>> vec = {{2,1,3},{3,4,6},{10,1,6},{8,3,7}};
    cout << func (vec) << endl;
    return 0;
}