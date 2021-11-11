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
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    rep(i, n) cin >> a[i];
    rep(j, m) cin >> b[j];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int asc = 1001001;
    rep(i, n) {
        int now = abs(a[i] - b[i]);
        asc = min(asc, now);
    }

    sort(a.begin(), a.end(), greater<int>());
    int desc1 = 1001001;
    rep(i, n) {
        int now = abs(a[i] - b[i]);
        desc1 = min(desc1, now);
    }

    sort(b.begin(), b.end(), greater<int>());
    int desc2 = 1001001;
    rep(i, n) {
        int now = abs(a[i] - b[i]);
        desc2 = min(desc2, now);
    }
    int tmp = min(asc, desc1);
    int ans = min(desc2, tmp);
    cout << ans << endl;
    return 0;
}