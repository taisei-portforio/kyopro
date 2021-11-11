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

const int t = 102;
const int INF = 1010101;

int main() {
    int x, n;
    cin >> x >> n;
    vector<int> a(102);
    set<int> p;
    rep(i, n) {
        cin >> a[i];
        p.insert(a[i]);//setへの入力が完了
    }

    int ans = INF, diff = INF;
    rep(i, t) {
        if(!p.count(a[i])) {
            int tmp = abs(i - x);
            cout << tmp << endl;
            if(tmp < diff) {
                ans = i, diff = tmp;
            }
        }
        // for(int j = 1; j < t; j++) {
        //     if(j == p[i]) {
        //         continue;
        //     } else{
        //         int tmp = abs(x - j);
        //         cout << tmp << endl;
        //         ans = min(ans, tmp);
        //     }
        // }
    }
    cout << ans << endl;
    return 0;
}
