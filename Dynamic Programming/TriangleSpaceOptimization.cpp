#include <bits/stdc++.h>
using namespace std;

int func (const vector <vector <int>> &vec) {
    int n = vec.size();
    vector <int> prev (n, -1);
    for (int i = 0; i < n; i++)
    {
        prev[i] = vec[n-1][i];
    }
    vector <int> temp(n, -1);
    for (int i = n-2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            int down = vec[i][j] + prev[j];
            int dg = vec[i][j] + prev[j+1];
            temp[j] = min(down, dg);
        }
        prev = temp;
    }
    return prev[0];
}

int main () { 
    vector<vector<int>> triangle = {
        {2},
        {3, 4},
        {6, 5, 7},
        {4, 1, 8, 3}
    };

    cout << func(triangle) << endl;
    return 0;
}