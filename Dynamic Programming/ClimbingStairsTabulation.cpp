#include <bits/stdc++.h>
using namespace std;

int func (int index, vector <int>& vec) {
    vec[0] = 1; vec[1] = 1;
    for (int i = 2; i <= index; i++) {
        vec[i] = vec[i-1] + vec[i-2];
    }
    return vec[index];
}

int main () { 
    int n;
    cin >> n;
    vector <int> vec(n+1, -1);
    cout << func (n, vec) << endl;    
    return 0;
}