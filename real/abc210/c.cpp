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
    int n, k;
    cin >> n >> k;
    vector<int> c(n);
    rep(i, n) cin >> c[i];

    // vector<ll> s(n+1);
    // rep(i, n) s[i+1] = s[i] + c[i];

    // ll ans = 0;
    // for(int i = 0; i+k <= n; i++) {
    //     ll tmp = s[i+k] - s[i];
    //     ans = max(ans, tmp);
    // }
    // cout << ans << endl;
    // return 0;
    int ans = 0;
    map<int, int> mp;
    int now = 0;
    rep(i, n) {
        if(mp[c[i]] == 0) now++;
        mp[c[i]]++;
        if(i >= k) {
            mp[c[i-k]]--;
            if(mp[c[i-k]] == 0) now--;
        }
        ans = max(ans, now);
    }
    cout << ans << endl;
    return 0;
}

// set<ll> s;
//     rep(i, n) s.insert(c[i]);

//     ll size = s.size();
//     if(k > size) cout << size << endl;
//     else if(k < size) cout << k << endl;
//     return 0;