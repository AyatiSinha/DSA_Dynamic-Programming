#include <bits/stdc++.h>
using namespace std;

int func (vector <vector <int>> &vec, int i, int j) {
    vector <int> rowprev(j+1, 0);
    for (int r = 0; r <= i; r++)
    {
        vector <int> temp(j+1, 0);
        for (int c = 0; c <= j; c++)
        {
            if(vec[r][c] == -1) temp[c] = 0;
            else if(r == 0 && c == 0) temp[c] = 1;
            else {
                if (r > 0) temp[c] += rowprev[c];
                if (c > 0) temp[c] += temp[c-1];
            }   
        }
        rowprev = temp;
    }
    return rowprev[j];
}

int main () { 
    
    return 0;
}