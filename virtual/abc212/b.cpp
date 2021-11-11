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
    int n = 4;
    vector<int> x(n);
    rep(i, n) cin >> x[i];

    bool ok = true;
    rep(i, n) {
        if(x[i] == x[i+1] && x[i+1] == x[i+2] && x[i+2] == x[i+3]) {
            cout << "Weak" << endl;
            return 0;
        }
        if(0 <= x[i] && x[i] <= 8) {
            if(x[i]+1 == x[i+1]) {
                continue;
            }else {
                ok = false;
                break;
            }
        }else {
            if(x[i+1] == 0) {
                continue;
            }else {
                ok = false;
                break;
            }
        }
    }
    if(ok) {
        cout << "Weak" << endl;
    } else {
        cout << "Strong" << endl;
    }
}