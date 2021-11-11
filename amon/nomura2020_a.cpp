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
    int h1, m1, h2, m2, k;
    cin >> h1 >> m1 >> h2 >> m2 >> k;

    h2 -= 1;
    m2 += 60;
    int hour = h2 - h1;
    int minute = m2 - m1;
    int tot = (hour*60) + minute;
    int ans = tot - k;
    cout << ans << endl;
    return 0;
}