#include <bits/stdc++.h>
using namespace std;

int func (int index, vector <int>& vec) {
    if (index <= 1) return vec[index] = 1;
    if (vec[index] != -1) return vec[index];
    int one = func (index-1, vec);
    int two = func (index-2, vec);
    return vec[index] = one + two;
} 

int main () { 
    int n;
    cin >> n;
    vector <int> vec (n+1, -1);
    cout << func(n, vec) << endl;
    return 0;
}