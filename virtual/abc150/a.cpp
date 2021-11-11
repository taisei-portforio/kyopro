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
    int k, x;
    cin >> k >> x;
    int have = 500 * k;
    if(have >= x) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}