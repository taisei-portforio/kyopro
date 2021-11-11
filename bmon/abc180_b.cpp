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
    vector<ll> x(n);
    rep(i, n) cin >> x[i];

    ll man = 0;
    ll ug = 0;
    ll che = 0;
    rep(i, n) {
        man += abs(x[i]);
        ug += x[i] * x[i];
    }
    che = *max_element(x.begin(), x.end());
    cout << man << endl;
    printf("%.10f\n", sqrt(ug));
    cout << che << endl;
    return 0;
}