#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;
using Graphstr = vector<vector<string> >;
using Pint = pair<int, int>;
using Pstr = pair<int, string>;
using Pll = pair<long long, long long>; 
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    sort(a.begin(), a.end());
    int ans = 0;

    //フツーに少ない子から配っていけばよい。
    rep(i, n) {
        if(x >= a[i]) {
            x -= a[i];
            ans++;
        }
    }

    //飴が余ったら誰かに押し付ける
    if(ans == n && x > 0) ans--;


    // if(tot > x) {
    //     sort(a.begin(), a.end(), greater<int>());
    //     rep(i, n) {
    //         if(x >= a[i]) {
    //             x -= a[i];
    //             ans++;
    //         }
    //     }
    // } else if(tot < x) {
    //     sort(a.begin(), a.end());
    //     rep(i, n) {
    //         if(x >= a[i]) {
    //             x -= a[i];
    //             ans++;
    //         }
    //     }
    // } else if(tot == x) {
    //     ans = n;
    // }

    cout << ans << endl;
    return 0;
}
