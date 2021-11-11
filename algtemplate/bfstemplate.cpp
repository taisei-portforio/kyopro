#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    //頂点の数と辺の数を入力
    int N, M;
    cin >> N >> M;

    //グラフの入力を受け取る
    Graph G(N);
    for(int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    //BFSのためのデータ構造
    vector<int> dist(N, -1);//全頂点を未訪問に初期化する。
    queue<int> que;

    //初期条件（頂点0を初期ノードとする。）
    dist[0] = 0;
    que.push(0); //0をオレンジ頂点にする。

    //BFSの開始（キューが空になるまで探索を行う。）
    while(!que.empty()) {
        int v = que.front();
        que.pop();

        //vから辿れる頂点を全て調べる。
        for(int nv : G[v]) {
            if(dist[nv] != -1) continue; //既に発見済みの場合は探索しない。
            //新たな白色頂点nv二ついて距離情報を更新してキューに追加する。
            dist[nv] = dist[v] + 1;
            que.push(nv);
        }

    }
    for(int v = 0; v < N; v++) { 
        cout << v << ": " << dist[v] << endl;
    }
}