#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;
using Graphstr = vector<vector<string> >;
using Pint = pair<int, int>;
using Pstr = pair<int, string>;
using Pll = pair<long long, long long>; 

int main() {
    ll x;
    cin >> x;
    ll yokin = 100;
    ll ans = 0;
    while(yokin < x) {
        ans++;
        // yokin *= 1.01; //大きな数を扱う際には浮動小数点方を使ってはいけない。（精度的な意味で）
        yokin += yokin / 100;
    }
    cout << ans << endl;
    return 0;
}