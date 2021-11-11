#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<string>>;

//グリッド探索配列
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

//入力
int H = 10, W = 10;
Graph field;

//dfs
void dfs(int h, int w) {
    field[h][w] = 0;

}
