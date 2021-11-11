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
    vector<double> x(n);
    vector<string> u(n);
    rep(i, n) cin >> x[i] >> u[i];

    double ans = 0;
    rep(i, n) {
        if(u[i] == "BTC") {
            double tmp = 380000 * x[i];
            ans += tmp;
        } else {
            ans += x[i];
        }
    }
    cout << setprecision(20) << ans << endl;
    return 0;
}