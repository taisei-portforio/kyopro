#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

//dfs
vector<bool> seen;
void dfs(const Graph &G, int v) {
    seen[v] = true;
    for(auto next_v : G[v]) {
        if(seen[next_v]) continue;
        dfs(G, next_v); //再帰的に探索
    }
}

int main() {
    //頂点数と辺数
    int N, M; cin >> N >> M;

    //グラフ入力
    Graph G(N);
    for(int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    //全頂点が訪問済みになるまで探索
    int count = 0;
    seen.assign(N, false); //vector長をNにして、すべてfalseに初期化させている。
    
    //全頂点を訪問済みにする
    for(int v = 0; v < N; v++) {
        if(seen[v]) continue; //vが探索済みだったらスルーする。
        dfs(G, v); //vが未探索ならそこからdfs
        count++;
    }
    cout << count << endl;
}

