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
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    rep(i, n) cin >> x[i] >> y[i];
    
    vector<int> order;
    rep(i, n) {
        order.push_back(i);
    }

    long double ans = 0;
    do {
        rep(i, n-1) {
            int a = order[i];
            int b = order[i+1];
            long double dx = x[a] - x[b];
            long double dy = y[a] - y[b];
            ans += sqrt(dx*dx + dy*dy);
        }
    }while(next_permutation(order.begin(), order.end()));
    rep(i, n) {
        ans /= (i + 1);
    }
    cout << setprecision(20) << ans << endl;
    return 0;
}