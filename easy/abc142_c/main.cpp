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

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    vector<int> ans(n);
    rep(i, n) ans[a[i] - 1] = i+1;
    rep(i, n) {
        cout << ans[i] << endl;
    }
    return 0;

    // queue<int> b;
    // rep(i, n) {
    //     rep(j, n) {
    //         if(a[j] == i+1) {
    //             b.push(j);
    //         }
    //     }
    // }
    // rep(i, n) {
    //     cout << b.front() << endl;
    //     b.pop();
    // }
    // return 0;
}