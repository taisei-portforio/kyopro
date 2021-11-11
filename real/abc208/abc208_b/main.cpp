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

const int INF = 1001001001;

int main() {
    int p; //商品
    cin >> p;
    vector<int> n;
    vector<int> coin;

    for(int i = 1; i <= 10; i++) {
        n.push_back(i);
        int k = accumulate(n.begin(), n.end(), 1, [](int init, int v) { return init * v; });
        coin.push_back(k);
    }
    int tmp = INF;
    int ans = 0;
    rep(i, coin.size()) {
        int j = 0;
        while(coin[i-j] > p) {
            j++;
            while(tmp < coin[i-j]); {
                tmp = p - coin[i-j];
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}