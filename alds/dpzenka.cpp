#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<int, int>;
using Pll = pair<long long, long long>;

int dp[MAX_N + 1][MAX_U + 1]; //埋めていく表

int do_dp() {
    for(int u = 0; u <= U; u++) dp[N][u] = 0; //境界条件

    for(int i = N-1; i >= 0; i--) {
        for(int u = 0; u <= U; u++) {
            if(u < w[i]) { //uが小さく、商品iが使えない。
                dp[i][u] = dp[i+1][u];
            }else { //商品iが使える。
                dp[i][u] = max(dp[i+1][u], dp[i+1][u-w[i]] + v[i]);
            }
        }
    }
    return dp[0][u];
}

int main() {

}