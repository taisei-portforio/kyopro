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
    vector<Pint> term(a, b);
    rep(i, m) cin >> a[i].first >> b[i].second;
    int k;
    cin >> k;
    vector<Pint> ball(c, d);
    rep(i, k) cin >> c[i].first >> d[i].second;
    //入力

    //2^nでぶん回したい
    vector<int> s; //bitを表す集合
    for(int bit = 0; bit < (1<<k); ++bit){
        for(int i = 0; i < k; i++) {
            if(bit & (1<<i)) {
                s.push_back(i);
            }
        }
        if(p)
    }
    
}