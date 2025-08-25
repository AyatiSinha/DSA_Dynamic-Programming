#include <bits/stdc++.h>
using namespace std;

int func (int index, vector<int> &height) {
    if (index == 0) return 0;
    if (index == 1) return abs (height[1] - height[0]);
    int one = func (index-1, height) + abs (height[index] - height[index-1]);
    int two = func (index-2, height) + abs (height[index] - height[index-2]);
    return min(one, two);
}

int main () { 
    int n = 6;
    vector <int> height = {30, 10, 60, 10, 60, 50};
    cout << func(n-1,height) << endl;
    return 0;
}