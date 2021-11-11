#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<int, int>;
using Pll = pair<long long, long long>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

//int型をvector型に変換
//bit: 集合を表す整数
//N: 何個のものについて考えているか
vector<int> IntegerToVector(int bit, int n) {
    vector<int> s;
    rep(i, n) {
        if(bit & (1 << i)) {
            s.push_back();
        }
    }
    return s;
}

int main() {
    int n, w; cin >> n >> w;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    //bit全探索
    bool exist = false;
    for(int bit = 0; bit < (1 << n); bit++) {
        //どれを選ぶか
        vector<int> s = IntegerToVector(bit, n);

        //部分集合に対応する総和
        int sum = 0;
        for(int i : s) sum += a[i];

        //判定
        if(sum == W)exist = true;
    }
    if(exist) cout << "Yes" << endl;
    else cout << "No" << endl;
}