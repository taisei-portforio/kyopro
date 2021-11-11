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

const int INF = 1001001001;

int main() {
    int r;
    cin >> r;
    int pi = M_PI;
    int tmp = r * r * pi;
    int ans = tmp / pi;
    cout << ans << endl;
    return 0;
}