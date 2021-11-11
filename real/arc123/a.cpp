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
    ll a, b, c;
    cin >> a >> b >> c;
    vector<ll> v(3);
    v[0] = a;
    v[1] = b;
    v[2] = c;
    sort(v.begin(), v.end());
    ll ab = v[1] - v[0];
    ll bc = v[2] - v[1];
    ll ans = 0;
    while(ab != bc) {
        if(abs(bc-ab) % 2 == 0) {
            if(ab > bc) {
                v[0] += 1;
                v[2] += 1;
                ans += 2;
            }else if(ab < bc) {
                v[0] -= 1;
                v[2] -= 1;
                ans += 2;
            }
        }else {
            if(abs(ab-bc) == 1) {
                    v[0] -= 1;
                    ans++;
            }else {
                if(ab > bc) {
                    v[0] += 1;
                    v[2] += 1;
                    ans += 2;
                }else if(ab < bc) {
                    v[0] -= 1;
                    v[2] -= 1;
                    ans += 2;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}