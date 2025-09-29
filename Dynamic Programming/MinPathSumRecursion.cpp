#include <bits/stdc++.h>
using namespace std;

int func (vector <vector <int>>& vec, int i, int j) {
    if (i == 0 && j == 0) return vec[0][0];
    if (i < 0 || j < 0) return INT_MAX;
    else {
        int up = vec[i][j] + func (vec, i-1,j);
        int left = vec[i][j] + func (vec, i, j-1);
        return min(left, up);
    }
}

int main () { 
    return 0;
}