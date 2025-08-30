#include <bits/stdc++.h>
using namespace std;

int func (int index, vector <int> &arr) {
    if (index == 0) return arr[0];
    if (index == 1) return max (arr[0], arr[1]);
    int prev2 = arr[0];
    int prev1 = max (arr[0], arr[1]);
    for (int i = 2; i <= index; i++)
    {
        int curr = max (prev1 , prev2 + arr[i]);
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}

int main () { 
    vector <int> arr = {2,1,4,9};
    cout << func (arr.size()-1 ,arr) << endl;
    return 0;
}