#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
#define MAX_V 1000
#define INF 1001001001
using ll = long long;
using Graph = vector<vector<int>>;
using Graphstr = vector<vector<string> >;
using Pint = pair<int, int>;
using Pstr = pair<int, string>;
using Pll = pair<long long, long long>; 
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h) cin >> s[i];//入力

    int ans = 0;
    rep(i, h-1)rep(j, w-1) { //2*2の左上を見つける
        int cnt = 0; //黒ますの個数をcntに入れていく。
        rep(di, 2)rep(dj, 2) if(s[i+di][j+dj] == '#') cnt++; //どこに黒ますがあるかを探索
        if(cnt == 1 || cnt == 3) {
            ans++; //角の個数になるのでそれをインクリメント
        }
    }
    cout << ans << endl;
    return 0;

}