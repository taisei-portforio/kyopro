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
    string s;
    cin >> s;
    int n = s.size();
    int ans = 0;
    rep(i, n) {
        if(s[i] == s[i+1]) {
            if(s[i] == '0') s[i+1] = '1';
            else s[i+1] = '0';
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}