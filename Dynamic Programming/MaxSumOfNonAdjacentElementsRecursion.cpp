#include <bits/stdc++.h>
using namespace std;

int func (int index, vector <int> &arr) {
    if (index == 0) return arr[0];
    if (index < 0) return 0;
    int pick = arr[index] + func (index-2, arr);
    int notpick = func (index - 1, arr) + 0;
    return max (pick, notpick);
}

int main () { 
    vector <int> arr = {2,1,4,9};
    cout << func (arr.size() - 1, arr) << endl;
    return 0;
}