#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

int main(){
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    rep(i, n) cin >> c[i];
    vector<int> cnt(n+1);
    rep(i, n) cnt[a[i]]++;
    ll ans = 0;
    rep(j, n) ans += cnt[b[c[j]-1]];
    cout << ans << endl;
    return 0;
}
