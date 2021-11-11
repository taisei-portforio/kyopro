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

const int INF = 1001001001;

int main() {
    string s;
    cin >> s;

    int like = 753;
    int n = s.size();
    int ans = INF;
    rep(i, n) {
        string st = s.substr(i, 3);
        int subint = stoi(st);
        int tmp = abs(like - subint);
        ans = min(ans, tmp);
    }

    cout << ans << endl;
    return 0;
}