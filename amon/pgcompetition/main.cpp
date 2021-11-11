#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;
using Graphstr = vector<vector<string> >;
using Pint = pair<int, int>;
using Pstr = pair<int, string>;
using Pll = pair<long long, long long>; 

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    // int t = y / x;
    // int ans = (t * z) - 1;
    // cout << ans << endl;
    // return 0;

    cout << (y*z - 1) / x << endl;
    return 0;
}