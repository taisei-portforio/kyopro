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
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    rep(i, n) {
        if(a[i] == x) {
            a.erase(a.begin()+i);
            n -= 1;
        }
    }

    rep(i, n) {
        if(a.size() == 0) {
            cout << " " << endl;
            return 0;
        }
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}