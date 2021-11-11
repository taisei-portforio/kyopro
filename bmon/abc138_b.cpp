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
    double n;
    cin >> n;
    vector<double> a(n);
    rep(i, n) cin >> a[i];

    double tot = 0;
    rep(i, n) {
        tot += 1 / a[i];
    }
    double ans = 1 / tot;
    cout << setprecision(20) << ans << endl;
    return 0;
}