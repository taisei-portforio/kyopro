#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<int> cnt(200);
    rep(i, n) cnt[a[i]%200]++;
    ll ans = 0;
    rep(i, 200) ans += (ll)cnt[i]*(cnt[i]-1)/2;
    cout << ans << endl;
    return 0;
}