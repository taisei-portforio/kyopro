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
    int p;
    cin >> p;
    int x = 1;
    for(int i = 1; i <= 10; i++) x *= i; //10の階乗
    int ans = 0;
    for(int i = 10; i >= 1; --i) {//
        ans += p/x;
        p %= x;
        x /= i;
    }
    cout << ans << endl;
    return 0;
}