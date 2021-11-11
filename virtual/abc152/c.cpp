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
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i, n) cin >> p[i];
    int ans = 0;
    int cutMin = 1e9;
    rep(i, n) {
        cutMin = min(curMin, p[i]);
        if(cutMin == p[i]) ans++;
    }
    cout << ans << endl;
    return 0;
}