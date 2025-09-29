#include <bits/stdc++.h>
using namespace std;

int func (vector <vector <int>> &mat, int i, int j) {
    vector <int> prevRow (j+1, 0);
    for (int r = 0; r <= i; r++)
    {
        vector <int> temp (j+1, 0);
        for (int c = 0; c <= j; c++)
        {
            if (r == 0 && c == 0) temp[c] = mat[0][0];
            else {
                int up = INT_MAX, left = INT_MAX;
                if (r > 0) up = mat[r][c] + prevRow[c];
                if (c > 0) left = mat[r][c] + temp[c-1];
                temp[c] = min(up, left);
            }
        }
        prevRow = temp;
    }
    return prevRow[j];
}

int main () { 
    
    return 0;
}