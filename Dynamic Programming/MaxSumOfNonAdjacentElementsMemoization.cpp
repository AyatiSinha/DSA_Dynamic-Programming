#include <bits/stdc++.h>
using namespace std;

int func (int index, vector <int> &arr, vector <int> &dp) {
    if (index == 0) return arr[0];
    if (index < 0) return 0;
    if (dp[index] != -1) return dp[index];
    else {
        int pick = arr[index] + func (index-2, arr, dp);
        int notpick = func(index-1, arr, dp) + 0;
        return dp[index] = max (pick, notpick);
    }
}

int main () { 
    vector <int> arr = {2,1,4,9};
    vector <int> dp (arr.size(), -1);
    cout << func (arr.size()-1, arr, dp) << endl;
    return 0;
}