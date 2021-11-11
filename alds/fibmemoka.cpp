#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<int, int>;
using Pll = pair<long long, long long>;

bool done[MAX_N][MAX_U+1];
int memo[MAX_N][MAX_U+1];

int search(int n) {
    if(done[i][u]); {
        return memo[i][u];
    }
    int res;
    if(n == 0) {
        res = 0;
    } else {
        res = 1;
    }
    done[i][u] = true;
    memo[i][u] = res;
    return res;
}

int main() {
    //cin入力
    cin >> n;
    //doneをすべてfalseに初期化し、search(0, U)を呼ぶ。
    for(int i = 0; )


}