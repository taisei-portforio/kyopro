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
    int n, k;
    cin >> n >> k;
    // Graph t(n, vector<int>(n));
    int t[8][8] //制約がわかっているなら配列で宣言
    rep(i, n)rep(j, n) cin >> t[i][j];

    vector<int> p;//都市の順列を列挙
    // rep(i, n)rep(j, n) order[i][j] = (i+1) + j;
    for(int i = 1; i < n; i++) p.push_back(i);

    int ans = 0;
    int tot = 0;
    // map<int, vector<int> >mp;
    do {
        int tot = t[0][p[0]];
        rep(i, n-2) tot +=  t[p[i]][p[i+1]];
        tot += t[p.back()][0];
        if(tot == k) ans++;
    }while(next_permutation(p.begin(), p.end()));
    cout << ans << endl;
    return 0;
}