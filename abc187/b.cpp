#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<int, int>;
using Pll = pair<long long, long long>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    rep(i, n) cin >> x[i] >> y[i];

    int ans = 0;
    rep(i, n) {
        for(int j = i+1; j < n; j++) {
            double katamuki = (double)(y[j] - y[i]) /  (x[j] - x[i]);
            if(katamuki >= -1 && katamuki <= 1) {
                ans++;
            }
        }
    }
    cout << ans << endl;
}