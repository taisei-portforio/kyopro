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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll mizu = a;
    ll red = 0;
    if(b >= d*c) {
        cout << "-1" << endl;
        return 0;
    }
    for(ll i = 1; i < INF; i++) {
        mizu += b;
        red += c;
        if(mizu <= d*red) {
            cout << i << endl;
            return 0;
        }
    }
}