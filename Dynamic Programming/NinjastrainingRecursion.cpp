#include <bits/stdc++.h>
using namespace std;

int func (vector <vector <int>> vec, int day, int prev) {
    if (day == 0) {
        int maxi = 0;
        for (int i = 0; i <= 2; i++)
        {
            if (i != prev) {
                maxi = max (maxi, vec[0][i]);
            }
        }
        return maxi;
    }
    int maxi = 0;
    for (int i = 0; i <= 2; i++)
    {
        if (i != prev) {
            int point = vec[day][i] + func (vec, day-1, i);
            maxi = max (maxi, point);
        }
    }
    return maxi;
}

int main () { 
    vector <vector <int>> vec = {{2,1,3},{3,4,6},{10,1,6},{8,3,7}};
    cout << func (vec, vec.size()-1, 3) << endl;
    return 0;
}