#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
#define MAX_V 1000
#define INF 1001001001
using ll = long long;
using Graph = vector<vector<int>>;
using Graphstr = vector<vector<string> >;
using Pint = pair<int, int>;
using Pstr = pair<int, string>;
using Pll = pair<long long, long long>; 
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> l(m), r(m);
    rep(i, m) cin >> l[i] >> r[i];
    //入力

    int L = 1;
    int R = n;
    int maxm = 0;
    int minm = 0;
    int ans = 0;
    rep(i, m) {
        maxm = max(L, l[i]);
        minm = min(R, r[i]);
    }
    if(maxm < minm) {
        cout << 0 << endl;
    }else {
        ans = maxm - minm;
    }
    cout << ans << endl;
    return 0;
}