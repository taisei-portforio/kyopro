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

const int mod = 1000000007;

int main() {
    int n;
    cin >> n;
    vector<int> c(n);
    rep(i, n) cin >> n;

    sort(c.begin(), c.end());
    // vector<ll> a;
    int ans = 1;
    // int tmp = c[0];
    rep(i, n) {
        // a.push_back(tmp);
        // tmp = c[i+1] - (a[i]-1); 
        ans = ((ll)ans * max(c[i]-i, 0)) % mod;
    }
    // int prod = accumulate(a.begin(), a.end(), 1, multiplies<int>());
    // int ans = prod % 1000000007;
    cout << ans << endl;
    return 0;
}