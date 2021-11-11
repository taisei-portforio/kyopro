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
    if(1 <= n && n <= 125) cout << 4 << endl;
    if(126 <= n && n <= 211) cout << 6 << endl;
    if(212 <= n && n <= 214) cout << 8 << endl;
    return 0;
}