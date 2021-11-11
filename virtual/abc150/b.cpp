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
    string s;
    cin >> n >> s;

    int ans = 0;
    rep(i, n) {
        if(s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'C') {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}