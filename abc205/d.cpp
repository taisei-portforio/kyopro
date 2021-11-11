#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<int, int>;
using Pll = pair<long long, long long>;

int main() {
    const ll ktmp = 1000000000000000001;
    int n, q; cin >> n >> q;
    vector<ll> a(n);
    vector<ll> k(q);
    rep(i, n){
        cin >> a[i];
        cin >> k[q];
    }//入力

    sort(a.begin(), a.end());

    
}