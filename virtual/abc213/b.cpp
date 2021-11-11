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
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    rep(i, n) cin >> a[i];
    copy(a.begin(), a.end(), b.begin());
    sort(b.begin(), b.end(), greater<int>());

    
}