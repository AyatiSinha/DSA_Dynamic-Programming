#include <bits/stdc++.h>
using namespace std;

int func (vector <vector <int>> vec) {
    int n = vec.size();
    int m = vec[0].size();
    vector <int> prev (m, -1);
    for (int i = 0; i < m; i++)
    {
        prev[i] = vec[0][i];
    }
    for (int i = 1; i < n; i++)
    {
        vector <int> temp (m, -1);
        for (int j = 0; j < m; j++)
        {
            int up = vec[i][j] + prev[j];
            int leftup = j > 0? vec[i][j] + prev[j-1] : INT_MIN;
            int rightup = j < m-1? vec[i][j] + prev[j+1] : INT_MIN;
            temp[j] = max (up, max(leftup, rightup));
        }
        prev = temp;
    }
    return *max_element (prev.begin(), prev.end());
}

int main () { 
    
    return 0;
}