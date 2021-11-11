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
    int A, B, M;
    cin >> A >> B >> M;
    vector<int> a(A), b(B);
    rep(i, A) cin >> a[i];
    rep(i, B) cin >> b[i]; 
    
    int Amin = *min_element(a.begin(), a.end());
    int Bmin = *min_element(b.begin(), b.end());
    int ans = Amin+Bmin;


    // vector<int> x(M), y(M), c(M);
    // rep(i, M) cin >> x[i] >> y[i] >> c[i];

    // rep(i, M) {
    //     ans = min(ans, a[x[i]] + b[y[i]] - c[i]);
    // }

    int x, y, c, tmp;
    rep(i, M) {
        cin >> x >> y >> c;
        tmp = a[x-1] + b[y-1] - c;
        ans = min(tmp, ans);
    }
    cout << ans << endl;
    return 0;
}
