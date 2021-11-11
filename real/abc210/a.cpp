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
    int n, a, x, y;
    cin >> n >> a >> x >> y;
    int ans = 0;
    for(int i = 1; i <= n; ++i) {
        if(i <= a){
            ans += x;
        }else if(i > a){
            ans += y;
        }
    }
    cout << ans << endl;
    return 0;
}