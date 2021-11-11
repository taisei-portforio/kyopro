#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i]; //入力

    int h = 0;
    ll ans = 0;
    rep(i, n) {
        h = max(h, a[i]);
        ans += h-a[i];
    }
    cout << ans << endl;
    return 0;
}