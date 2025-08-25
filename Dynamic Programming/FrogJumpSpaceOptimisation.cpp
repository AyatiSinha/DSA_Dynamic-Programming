#include <bits/stdc++.h>
using namespace std;

int func (int index, vector <int> &height) {
    if (index == 0) return 0; 
    if (index == 1) return abs(height[1] - height[0]); 
    int prev2 = 0;
    int prev = abs(height[1] - height[0]);
    for (int i = 2; i <= index; i++) {
        int one = prev + abs(height[i] - height[i-1]);
        int two = abs(height[i] - height[i-2]) + prev2;
        int curr = min (one, two);
        prev2 = prev;
        prev = curr;
    }
    return prev;
}

int main () { 
    int n = 6;
    vector <int> height = {30, 10, 60, 10, 60, 50};
    cout << func(n-1, height) << endl;
    return 0;
}