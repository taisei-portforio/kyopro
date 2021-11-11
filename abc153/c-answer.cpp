#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    rep(i, n) cin >> h[i];
    sort(h.begin(), h.end());
    k = min(n, k);
    ll ans = 0;
    rep(i, k) {
        h.pop_back();//for文でやっているのと同じ
    }
    rep(i, h.size()) ans += h[i];
    cout << ans << endl;
    return 0;
}