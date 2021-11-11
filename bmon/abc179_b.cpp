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
    int m = 2;
    vector<vector<int>> d(n, vector<int>(m));
    rep(i, n)rep(j, m) cin >> d[i][j];
    int ans = 0;
    rep(i, n){
        if(d[i][0] == d[i][1]) {
            ans++;
        }else {
            ans = 0;
        }
        if(ans >= 3) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}