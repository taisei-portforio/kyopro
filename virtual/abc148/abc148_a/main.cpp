#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;
using Graphstr = vector<vector<string> >;
using Pint = pair<int, int>;
using Pstr = pair<int, string>;
using Pll = pair<long long, long long>; 

int main() {
    string s, t;
    cin >> s >> t;
    int n = 3;
    int ans = 0;
    rep(i, n) {
        if(s[i] == t[i]) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
