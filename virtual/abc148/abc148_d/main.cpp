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

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    // int nxt = 1; //次に来るべき数
    // int ans = 0; //消した個数

    int same = 1;
    int ans = 0;
    rep(i, n) {
        if(a[i] == same) {
            same++;
        } else {
            ans++;
        }
    }
    if(same == 1) { //ans == n 全部消しちゃった場合
        cout << "-1" << endl;
    }else {
        cout << ans << endl;
    }
    
    return 0;
}