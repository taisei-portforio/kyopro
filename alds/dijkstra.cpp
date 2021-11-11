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



// int cost[MAX_V][MAX_V]; //cost[u][v]は辺e=(u, v)のコスト（存在しない場合はINF）
// int d[MAX_V];//頂点sからの距離
// bool used[MAX_V];//既に使われたかのフラグ
// int V;//頂点数

// //始点sから各頂点への最短距離を求める
// void dijkstra(int s) {
//     fill(d, d+V, INF);
//     fill(used, used+V, false);
//     d[s] = 0;

//     while(true) {
//         int v = -1;
//         //まだ使われていない頂点のうち距離が最小のモノを探す
//         rep(u, V) {
//             if(!used[u] && (v == -1 || d[u < d[v]])) v = u;
//         }
//         if(v == -1) break;

//         used[v] = true;
//         rep(u. V) {
//             d[u] = min(d[u], d[v]+cost[v][u]);
//         }
//     }
// }

struct edge {
    int to,
    int cost;
};

typedef pair<int, int> P; //firstは最短距離、secondは頂点の番号

int V;
vector<edge> G[MAX_V];
int d[MAX_V];

void dijkstra(int s) {
    //greater<P>を指定することでfirstが小さい順に取り出せるようにする。
    priority_queue<P, vector<P>, greater<P> > que;
    fill(d, d+V, INF);
    d[s] = 0;
    que.push(P(0, s));

    while(!que.empty()) {
        P p = que.top(); que.pop();
        int v = 
    }
}