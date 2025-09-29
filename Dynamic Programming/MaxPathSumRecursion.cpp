#include <bits/stdc++.h>
using namespace std;

int func (vector <vector <int>>& vec) {
    int maxi = INT_MIN;
    int n = vec.size();
    int m = vec[0].size();
    for (int i = 0; i < m; i++)
    {
        maxi = max (func2 (vec, n-1, i), maxi);
    }
    return maxi;
}

int func2 (vector <vector <int>>& vec, int i, int j) {
    int m = vec[0].size();
    if (j < 0 || j >= m) return INT_MIN;
    if (i == 0) return vec[i][j];
    else {
        int up = vec[i][j] + func2 (vec, i-1, j);
        int leftup = vec[i][j] + func2 (vec, i-1, j-1);
        int rightup = vec[i][j] + func2 (vec, i-1, j+1);
        return max(up, max(leftup, rightup));
    }
} 

int main () { 
    
    return 0;
}