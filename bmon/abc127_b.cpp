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
    int r, d, x2000;
    cin >> r >> d >> x2000;
    int ans = 0;
    int t = x2000;
    for(int i = 1; i <= 10; i++) {
        ans = r * t - d;
        cout << ans << endl;
        t = ans;
    }
    return 0;
}