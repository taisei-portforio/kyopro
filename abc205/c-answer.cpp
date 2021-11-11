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
    if(c%2 == 0) {
        a = abs(a);
        b = abs(b);     
    }

    if(a < b) cout << "<" << endl;
    if(a == b) cout << "=" << endl;
    if(a > b) cout << ">" << endl;
    return 0;
}
