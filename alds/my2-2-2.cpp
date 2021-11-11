#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<int, int>;

//入力
int N;
cin >> N;
vector<int> S(N);
vector<int> T(N);

//仕事をソートするためのpair配列
vector<P> itv(N);

int main() {
    rep(i, n) {
        itv[i].first = T[i];
        itv[i].second = S[i];
    }
    sort(itv.begin(), itv.end());

    //tは最後に選んだ仕事の終了時間（各仕事は時間Siに始まり、時間Tiに終わる。）
    int ans = 0, t = 0;
    rep(i, n) {
        if(t < itv[i].second) {
            ans++;
            t = itv[i].first;
        }
    }
    cout << ans << endl;
    return 0;
}