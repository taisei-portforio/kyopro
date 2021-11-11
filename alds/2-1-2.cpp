#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    int n, m;
    cin >> n >> m;

    Graph g(n);
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        //無向グラフの場合は以下も
        g[b].push_back(a);
    }
}