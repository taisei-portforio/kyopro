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
    vector<int> l(n);
    rep(i, n) cin >> l[i];

    int ans = 1; int d = 0;
    rep(i, n) {
        d += l[i];
        if(d > x) {
            break;
        }
        ans++;
    }
    // for(int d = 1; d < n; d++) {
    //     int tmp = d + l[d];
    //     if(tmp <= x) {
    //         ans++;
    //     }else {
    //         break;
    //     }
    // }
    cout << ans << endl;
    return 0;
}
