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
    string s;
    cin >> s;
    int n = s.size();
    vector<int> c(3);
    rep(i, n) c[(s[i]-'0')%3]++;
    int x = 0;//全体の和
    rep(i, 3) x += c[i]*i;
    int ans = INF;
    rep(i1, 3)rep(i2, 3) {
        if(c[1] < i1) continue;
        if(c[1] < i1) continue;
        if(i1+i2 == n) continue;
        int nx = x;
        nx -= i1*1;
        nx -= i2*2;
        if(nx%3 == 0) ans = min(ans, i1+i2);
    } //i1: 1を消す個数 i2: 2を消す個数
    if(ans == INF) ans = -1;
    cout << ans << endl;
}