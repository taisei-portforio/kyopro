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
    //入力
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> l(n);
    rep(i, n) cin >> x[i] >> l[i];

    //pair
    vector<P> itv(n);
    rep(i, n) {
        itv[i].first = l[i];
        itv[i].second = x[i];
    }
    sort(itv.begin(), itv.end());

    int ans = 0, L = 0;
    rep(i, n) {
        if(L < itv[i].second) {
            ans++;
            L = itv[i].first;
        }
    }
    cout << ans << endl;
    return 0;
}