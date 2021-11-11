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
    int s, t;
    cin >> s >> t;
    int ans = 0;
    for(int i = 0; i <= s; i++) {
        for(int j = 0; j <= s; j++) {
            for(int k = 0; k <= s; k++) {
                if(i+j+k <= s && i*j*k <= t) {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}