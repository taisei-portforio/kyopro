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
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n), b(m);
    queue<ll> abook;
    queue<ll> bbook;
    rep(i, n) {
        cin >> a[i];
        abook.push(a[i]);
    }
    rep(i, m) {
        cin >> b[i];
        bbook.push(b[i]);
    }
    
    ll tot = 0;
    int ans = 0;
    int tmp = 0;
    rep(i, INF) {
        ll aa = abook.front();
        ll bb = bbook.front();
        if(aa < bb) {// ll minm = min(aa, bb);とするとどっちをpopすればいいかわからなくなってしまう
            tmp = aa;
            abook.pop();
        }else {
            tmp = bb;
            bbook.pop();
        }
        if((tot += tmp) < tot) {
            tot += tmp;
            ans++;
        } else {
            cout << ans << endl;
            return 0;
        }
    }
}