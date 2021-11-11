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
    ll n, m;
    cin >> n >> m;
    vector<Pll> a(n);
    rep(i, n) cin >> a[i].first >> a[i].second;
    sort(a.begin(), a.end());
    ll ans = 0;
    for(int i = 0; i < n && m > 0; ++i) {
        ans += a[i].first * min(m, a[i].second);
        m -= min(m, a[i].second);
    }
    cout << ans << endl;
    return 0;
}