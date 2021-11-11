#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<int, int>;
using Pll = pair<long long, long long>;

//入力
int n, m;
char s[MAX_N], t[MAX_M];

int dp[MAX_N+1][MAX_M+1]; //DPテーブル

int main() {
    rep(i, n) {
        rep(j, m) {
            if(s[i] == t[j]) {
                dp[i+1][j+1] = dp[i][j]+1;
            }else {
                max(dp[i][j+1], dp[i+1][j]);
            }
        }
    }
    cout << dp[n][m] << endl;
}