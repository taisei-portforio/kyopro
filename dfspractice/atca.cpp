#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

//四方向への移動ベクトル
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

//入力
int H, W;
vector<string> field;

bool seen[510][510];

void dfs(int h, int w) {
    seen[h][w] = true;

    //四方向の探索
    for(int dir = 0; dir < 4; dir++) {
        int nh = h + dx[dir];
        int nw = w + dy[dir];
        if(nh < 0 || nh >= H || nw < 0 || nw >= W) continue;//場外アウト、移動先が壁ならスルーする。
        if(field[nh][nw] == '#') continue;
        
        //移動先が探索済みなら、、、
        if(seen[nh][nw]) continue;

        //再帰的に探索する。
        dfs(nh, nw);
    }
}

int main() {
    //頂点数と辺の数を入力
    cin >> H >> W;    
    field.resize(H);
    for(int h = 0; h < H; h++) {
        cin >> field[h];
    }
    ///sとgのマスを特定
    int sh, sw, gh, gw;
    for(int h = 0; h < H; h++) {
        for(int w = 0; w < W; w++) {
            if(field[h][w] == 's') sh = h, sw = w;
            if(field[h][w] == 'g') gh = h, gw = w;
        }
    }
    //探索を開始する
    memset(seen, 0, sizeof(seen));
    dfs(sh, sw);
    if(seen[gh][gw]) cout << "Yes" << endl;
    else cout << "No" << endl;
}
