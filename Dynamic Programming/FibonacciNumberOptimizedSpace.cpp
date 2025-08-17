#include <bits/stdc++.h>
using namespace std;

int func (int n) {
    if (n == 0) return 0;
    int prev = 1;
    int prev2 = 0;
    for (int i = 2; i <= n; i++)
    {
        int curr = prev + prev2;
        prev2 = prev;
        prev = curr;
    }
    return prev;
}

int main () { 
    int n;
    cin >> n;
    cout << func(n) << endl;
    return 0;
}