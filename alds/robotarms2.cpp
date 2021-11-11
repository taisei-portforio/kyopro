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
    int n; cin >> n;
    vector<Pll> v(n);
    rep(i, n) {
        ll x, l;
        cin >> x >> l;
        v[i] = {x - l, x + l};
    }

    //区間を右端の小さい順にソート
    sort(v.begin(), v.end(), [](Pll a, Pll b) {
        return a.second < b.second;
    });\

    //cur := 現在選んでいる区間のうち、最も右にあるやつの右端
    int res = 0;
    ll cur = -(1LL<<60);
    rep(i, n) {
        if(cur > v[i].first) continue;
        res++;
        cur = v[i].second;
    }
    cout << res << endl;
}