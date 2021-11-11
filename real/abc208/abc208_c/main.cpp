#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repl(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;
using Graphstr = vector<vector<string> >;
using Pint = pair<int, int>;
using Pstr = pair<int, string>;
using Pll = pair<long long, long long>; 
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main() {
    int n; 
    ll k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    vector<ll> ans(n, k/n);
    k %= n;

    vector<Pint> p(n);
    rep(i, n) p[i] = Pint(a[i], i);
    sort(p.begin(), p.end());

    rep(i, k) ans[p[i].second]++;
    
    rep(i, n) cout << ans[i] << endl;
    return 0;    
}