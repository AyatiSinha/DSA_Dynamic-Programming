#include <bits/stdc++.h>
using namespace std;

int func (vector <int> &arr) {
    int n = arr.size();
    if (n == 0) return 0;
    if (n == 1) return arr[0];
    if (n == 2) return max (arr[0], arr[1]);
    int prev1 = max (arr[0], arr[1]);
    int prev2 = arr[0];
    for (int i = 2; i < n; i++)
    {
        int curr = max (prev1, prev2+arr[i]);
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}

int main () { 
    vector <int> money = {1,3,2,1};
    vector <int> temp1;
    for (int i = 0; i <= money.size()-2; i++)
    {
        temp1.push_back (money[i]);
    }
    vector <int> temp2;
    for (int i = 1; i < money.size(); i++)
    {
        temp2.push_back(money[i]);
    }
    int ans1 = func(temp1);
    int ans2 = func(temp2);
    cout << max(ans1, ans2) << endl;
    return 0;
}