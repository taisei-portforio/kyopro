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
    vector<int> a(m), b(m);
    rep(i, m) cin >> a[i] >> b[i];
    cin >> k;
    vector<int> c(k), d(k);
    rep(i, k) cin >> c[i] >> d[i];
    //入力
    int ans = 0;
    int k2 = (1 << k); //パターン数の上限を決める変数
    rep(s, k2) {
        vector<int> bit(n+1); //bitを入れるやつ
        rep(i, k) {
            if((s >> i) & 1) {
                bit[d[i]]++;
            } else {
                bit[c[i]]++;
            }
        }
        int now = 0;
        rep(i, m) {
            if(bit[a[i]] == 0) continue;
            if(bit[b[i]] == 0) continue;
            now++;
        }
        ans = max(ans, now);
    }
    cout << ans << endl;
    return 0;
    
}