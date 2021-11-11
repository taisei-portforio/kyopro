#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
#define MAX_V 1000
#define INF 1001001001
using ll = long long;
using Graph = vector<vector<int>>;
using Graphstr = vector<vector<string> >;
using Pint = pair<int, int>;
using Pstr = pair<int, string>;
using Pll = pair<long long, long long>; 
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main() {
    ll n, k;
    cin >> n >> k;
    ll a = n % k;
    ll ans = min(a, k-a);
    cout << ans << endl;
    return 0;
}


// ll m = 0;
// ll minm(ll a, ll b) {
//     m = abs(a-b);
//     if(a > m) {
//         minm(m, b);
//     }else {
//         return a;
//     }
// }

// int main(){
//     ll n, k;
//     cin >> n >> k;
//     cout << minm(n, k) << endl;
//     return 0;
// }