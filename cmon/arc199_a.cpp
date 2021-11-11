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
    vector<int> h(n);
    rep(i, n) cin >> h[i];
    vector<int> a(m), b(m);
    rep(i, n) cin >> a[i] >> b[i];

    int ans = 0;
    rep(i, n) {
        if(h[a[i]-1] > h[b[i]-1]){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}