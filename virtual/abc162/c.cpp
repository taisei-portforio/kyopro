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
    int k;
    cin >> k;
    int ans = 0;
    for(int a = 1; a <= k; ++a) {
        for(int b = 1; b <= k; ++b) {
            for(int c = 1; c <= k; ++c) {
                int tmp = gcd(a, b);
                ans += gcd(tmp, c);
            }
        }
    }
    cout << ans << endl;
    return 0;
}