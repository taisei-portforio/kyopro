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
    int n, m, t; cin >> n >> m >> t;
    vector<int> a(m);
    vector<int> b(m);
    rep(i, m) cin >> a[i] >> b[i];

    bool ans = true;
    int bat = n;
    for(int i = 0; i < t; i++) {
        if(a[i] <= i && i <= b[i]) {
            if(n == bat) {
                continue;
            } else {
                bat++;
            }
        }else {
            bat--;
        }

        if(bat <= 0) {
            ans = false;
            break;
        }
    }
    if(ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
