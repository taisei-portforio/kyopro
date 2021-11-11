#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<bool>>;
//上下左右の移動を表す配列を定義
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

//入力
int H, W;
vector<string> field;

//dfs関数
bool seen[510][510];
void dfs(int h, int w) {
    seen[h][w] = true;

    //四方向探索
    for(int dir = 0; dir < 4; dir++) {
        int nh = h + dx[dir];
        int nw = w + dy[dir];

        //探索した場所が壁だったり、場外ならスルー
        if(nh < 0 ||)
    }
}

int main() {
    //入力受け取り
    cin >> H >> W;
    field.resize(H);
    for(int h = 0; h < H; ++h) cin >> field[h];

    //sとgのますを特定する
    int sh, sw, gh, gw;
    for(int h = 0; h < H; ++h) {
        for(int w = 0; w < W; ++w) {
            if(field[h][w] == 's') sh = h, sw = w;
            if(field[h][w] == 'g') gh = h, gw = w;
        }
    }
    //探索開始
    memset(seen, 0, sizeof(seen));
    dfs(sh, sw);

}
