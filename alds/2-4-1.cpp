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

int main() {
    //入力
    int l, p, n;
    int a[max_n + 1], b[max_n + 1];

    //
    a[n] = l;
    b[n] = 0;
    n++;

    //ガソリンスタンドを管理する順位キュー
    priority_queue<int> que;
    //ans:補給回数, pos:今いる場所
}