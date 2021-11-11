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

ll f(ll x) {
    if(x == 1) return 1;
    return f(x / 2)*2 + 1;
}

int main() {
    ll h;
    cin >> h;
    cout << f(h) << endl;
    return 0;
}
// int cnt = 1;
// int i = 0;
// int node(int n) {
//     if(n == 1) {
//         return cnt;  
//     }else {
//         n /= 2;
//         if(cnt == 1) {
//             i++;
//             cnt += i*2;
//         }else {
//             cnt += i*2;
//         }
//     }
// }

// int main() {
//     int h;
//     cin >> h;
    
//     int ans = node(h);
//     cout << ans << endl;
//     return 0;
// }
