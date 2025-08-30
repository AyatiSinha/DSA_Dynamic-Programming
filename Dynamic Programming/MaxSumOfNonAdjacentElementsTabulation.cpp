#include <bits/stdc++.h>
using namespace std;

int func (int index, vector <int> &arr) {
    if (index == 0) return arr[0];
    if (index == 1) return max (arr[0], arr[1]);
    vector <int> dp (index+1, -1);
    dp[0] = arr[0];
    dp[1] = max (arr[1], arr[0]);
    for (int i = 2; i <= index; i++) {
        int pick = arr[i] + dp[i-2];
        int notpick = 0 + dp[i-1];
        dp[i] = max (pick, notpick);
    }
    return dp[index];
}

int main () { 
    vector <int> arr = {2,1,4,9};
    cout << func(arr.size()-1, arr) << endl;    
    return 0;
}