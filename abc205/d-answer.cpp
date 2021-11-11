#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<int, int>;
using Pll = pair<long long, long long>;

int main() {
    int n, q;
    cin >> n >> q;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    vector<ll> c(n+1);
    rep(i, n) {
        c[i+1] = a[i]-i-1;
    }

    rep(qi, q) {
        ll k;
        cin >> k;
        int r = lower_bound(c.begin(), c.end(), k) - c.begin();
        
    }
}
