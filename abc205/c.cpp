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
    ll a, b, c;
    cin >> a >> b >> c;
    
    ll aa = a;
    ll bb = b;
    for(int i = 1; i < c; i++) {
        aa = aa*a;
        bb = bb*b;
    }
    cout << aa << endl;
    cout << bb << endl;
    if(aa < bb) {
        cout << "<" << endl;
    } else if(aa > bb) {
        cout << ">" << endl;
    } else if(aa == bb) {
        cout << "=" << endl;
    }

    return 0;
}