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
    int n;
    cin >> n;
    int t;
    vector<int> l(n), r(n);
    rep(i, n) {
        cin >> t >> l[i] >> r[i];//入力
        l[i] *= 2; //2倍して1ずらす
        r[i] *= 2;
        if(t >= 3) l[i]++; //ずらす
        if(t % 2 == 0) r[i]--;
    }
    
    int ans = 0;
    rep(i, n) {
        rep(j, i) {
            if(r[i] < l[j]) continue;
            if(r[j] < l[i]) continue;
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}