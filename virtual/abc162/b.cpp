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
    ll n;
    cin >> n;
    ll ans = 0;
    for(int i = 1; i <= n; i++) {
        if(i % 3 == 0 || i % 5 == 0) continue;
        ans += i;
    }
    cout << ans << endl;
    return 0;
}