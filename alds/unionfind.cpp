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

int par[MAX_N]; //親
int rank[MAX_N]; //木の深さ

//n要素で初期化
void init(int n) {
    rep(i, n) {
        par[i] = i;
        rank[i] = 0;
    }
}

//木の根を求める
int find(int x) {
    if(par[x] == x) {
        return x;
    } else {
        return par[x] = find(par[x]);
    }
}

//xとyの属する集合を併合
void unite(int x, int y) {
    x = find(x);
    y = find(y);
    if(x == y) return;

    if(rank[x] < rank[y]) {
        par[x] = y;
    } else {
        par[y] = x;
        if(rank[x] == rank[y]) rank[x]++;
    }
}

//xとyが同じ集合に属するか否か
bool same(int x, int y) {
    return find(x) == find(y);
}

int main() {
    
}
;/