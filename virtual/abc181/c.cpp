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

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    bool ok = false;
    rep(i, n) {
        if(x[i] == x[i+1] && x[i] == x[i+2]) {
            ok = true;
            break;
        }
        if(y[i] == y[i+1] && y[i] == y[i+2]) {
            ok = true;
            break;
        }
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}