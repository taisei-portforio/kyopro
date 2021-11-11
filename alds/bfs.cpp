#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

const int INF = 100000000;

typedef pair<int, int> P;

//入力
char maze[MAX_N][MAX_M + 1]; // 迷路を表す文字列の配列
int N, M;
int sx, sy; // スタートの座標
int gx, gy; // ゴールの座標

int d[MAX_N][MAX_M]; //各点までの最短距離の配列

//グリッド探索配列
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

//(sx, sy)から(gx, gy)への最短距離を求める。
//たどり着けないとINF
int bfs() {
    queue<P> que;
    // 全ての点をINFで初期化
    rep(i, N) {
        rep(j, M) {
            d[i][j] = INF;
        }
    }
    que.push(P(sx, sy));
    d[sx][sy] = 0;

    //キューが空になるまでループ
    while(que.size()) {
        //キューの先頭を取り出す
        P p = que.front();
        que.pop();
        //取り出してきた状態がゴールなら探索をやめる
        if(p.first == gx && p.second == gy) break;

        //移動4方向をループする。
        for(int i = 0; i < 4; i++) {
            //移動した後の点を(nx, ny)とする
            int nx = p.first + dx[i], ny = p.second + dy[i];

            //移動が可能かの判定と既に訪れたことがあるかの判定(d[nx][ny] != INFなら訪れたことがある)
            if(0 <= nx && nx < N && 0 <= ny && ny < M && maze[nx][ny] != '#' && d[nx][ny] == INF) {
                //移動できるならqueueに入れ、その点の距離をp空の距離⁺1で確定する
                que.push(P(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }
        }
    }
    return d[gx][gy];
}

int main() {
    int res = bfs();
    cout << res << endl;
}