#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

// 深さ優先探索
vector<bool> seen;
void dfs(const Graph &G, int v) {
    seen[v] = true;//vを訪問済みにする
    for(auto next_v : G[v]) {
        if(seen[next_v]) continue;//next_vが探索済みならばスルーする
        dfs(G, next_v); //再帰する
    }
}

int main() {
    // 頂点数と辺の数
    int N, M;
    cin >> N >> M;

    // グラフ
    Graph G(N);
    for(int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    //頂点0をスタートとした探索
    seen.assign(N, false)//全頂点を未訪問に初期化する。
    dfs(G, 0);
}