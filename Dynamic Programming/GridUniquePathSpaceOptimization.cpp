#include <bits/stdc++.h>
using namespace std;

int func (int i, int j) {
    vector <int> rowprev (j+1, 0);
    for (int r = 0; r <= i; r++)
    {
        vector <int> temp (j+1, 0);
        for (int c = 0; c <= j; c++)
        {
            if (r == 0 && c == 0) temp[0] = 1;
            if (r > 0) temp[c] += rowprev[c];
            if (c > 0) temp[c] += temp[c-1];
        }
        rowprev = temp;
    }
    return rowprev[j];
}

int main () { 
    
    return 0;
}