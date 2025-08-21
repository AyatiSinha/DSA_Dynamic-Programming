#include <bits/stdc++.h>
using namespace std;

int func (int index) {
    if (index == 0)return 1;
    if (index == 1)return 1;
    int left = func (index - 1);
    int right = func (index -2);
    return left + right;
}

int main () { 
    int n;
    cin >> n;
    cout << func (n) << endl; 
    return 0;
}