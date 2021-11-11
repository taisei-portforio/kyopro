#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;
using Graphstr = vector<vector<string> >;
using Pint = pair<int, int>;
using Pstr = pair<int, string>;
using Pll = pair<long long, long long>; 
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int n, m;
vector<vector<char> > field(n, vector<char>(n));

int dfs(int x, int y) {
    field[x][y] = ".";

    for(int dx = -1; dx <= 1; dx++) {
        for(int dy = -1; dy <= 1; dy++) {
            int nx = x + dx, ny = y + dy;

            if(0 <= nx && nx < n && 0 <= ny && ny < m && field[nx][ny] == "W") {
                dfs(nx, ny);
            }
        }
        return;
    }
}

int main() {
    int res = 0;
    rep(i, n) {
        rep(j, m) {
            if(field[i][j] == 'W') {
                dfs(i, j);
                res++;
            }
        }
    }
    cout << res << endl;
}