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

int main(){
    ll h, w;
    cin >> h >> w;
    ll ans = 0;
    if(h % 2 == 0) {
        ans = (h / 2) * w;
    } else {
        for(ll i = 1; i <= w; i++) {
            if(i % 2 == 1) {
                ll ver = (h / 2) + 1;
                ans += ver;
            } else {
                ll ver = h / 2;
                ans += ver;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
