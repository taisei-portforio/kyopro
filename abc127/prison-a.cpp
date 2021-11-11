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

    int L = 1;//左端
    int R = n;//右端
    int maxm = 0;
    int minm = 0;
    rep(i, m) {
        L = max(L, l[i]);
        R = min(R, r[i]);
    }
    int ans = (R-L)+1; //+1を忘れずに
    cout << max(ans, 0) << endl;
    return 0;
}