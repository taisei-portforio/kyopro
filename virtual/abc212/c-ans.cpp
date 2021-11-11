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
    rep(i, m) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ai = 0, bi = 0;
    int ans = 1001001001;
    while(ai < n && bi < m) {
        ans = min(ans, abs(a[ai]-b[bi]));
        if(a[ai] < b[bi]) ++ai; else ++bi;
    }
    cout << ans << endl;
    return 0;
}