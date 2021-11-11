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

int d[MAX_V][MAX_V]; //d[u][v]は辺e=(u, v)のコスト（存在しない場合はINF、ただしd[i][i] = 0）
int V; //頂点数

void warshall_floyd() {
    rep(k, V) {
        rep(i, V) {
            rep(j, V) {
                d[i][j] = min(d[i][j], d[i][k]+d[k][j]);
            }
        }
    }
}