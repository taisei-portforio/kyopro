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
    vector<int> a(n), b(n), c(n);
    rep(i, n) cin >> a[i] >> b[i] >> c[i];

    vector<int> cnt(n + 1);
    rep(i, n) cnt[a[i]]++;
    ll ans = 0;
    rep(j, n) ans += cnt[b[c[j]-1]];
    cout << ans << endl;
    return 0
}