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
    int a, b;
    cin >> a >> b;

    int tmp = b / a;
    int ans = 0;
    if(a == b) {
        ans = tmp;
    } else {
        ans = tmp + 1;
    }
    cout << ans << endl;
    return 0;
}
