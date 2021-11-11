#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<int, int>;
using Pll = pair<long long, long long>;

int dp[MAX_N + 1][MAX_W + 1];//メモ化テーブル

int rec(int i, int j) {
    if(dp[i][j] >= 0) {
        //既に調べたことがあるならばその結果を再利用
        return dp[i][j];
    }
    int res;
    if(i == n) {
        res = 0;
    } else if(j < w[i]) {
        res = rec(i + 1, j);
    }else {
        res = max(rec(i + 1, j), rec(i + 1, j - w[i]) + v[i]);
    }
    //結果をテーブルに記憶させる
    return dp[i][j];
}

int main() {
    //まだ調べていないことを表す‐1でメモ化テーブルを初期化
    memset(dp, -1, sizeof(dp));
    cout << rec(0, w) << endl;
}