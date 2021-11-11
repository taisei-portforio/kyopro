#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;
//グリッド探索配列
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int ume = 0;

//dfs
bool seen[100][100];
void dfs(int i, int j) {
    seen[i][j] = true;

    //四方向探索
    for(int dir = 0; dir < 4; dir++) {
        int ni = i + dx[dir];
        int nj = j + dy[dir];

        //スルーする場所
        if(ni < 0 || ni > 10 || nj < 0 || nj > 10 ) continue;
        if(field[ni][nj] == 'x') {
            if(ume < 1) {
                ume++;
            } else {
                continue;
                ume = 0;
            }
        }
    }
}

int main() {
    string field[10];
    //入力受け取り
    for(int i = 0; i < 10; i++) cin >> field[i];
}