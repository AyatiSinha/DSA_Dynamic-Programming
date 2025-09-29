#include <bits/stdc++.h>
using namespace std;

int func (vector <vector <int>>& vec, int i, int j) {
    int n = vec.size();
    if (i == n-1) return vec[i][j];
    int down = vec[i][j]+ func (vec, i+1, j);
    int dg = vec[i][j] + func (vec, i+1, j+1);
    return min(down, dg);
}

int main () { 
    
    return 0;
}