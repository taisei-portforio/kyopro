#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<int, int>;
using Pll = pair<long long, long long>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    if(a + b > ans) {
        ans = a+b;
    }
    if(b + c > ans) {
        ans = b+c;
    }
    if(c + a > ans) {
        ans = c+a;
    }
    cout << ans << endl;
    return 0;
}

