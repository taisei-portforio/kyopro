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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    vector<ll> s(n+1);
    rep(i, n) {
        s[i+1] = s[i]+a[i];
    }

    ll ans = 0;
    for(int i = 0; i+k <= n; i++) {
        ans += s[i+k] - s[i];
    }
    cout << ans << endl;
    return 0;
}