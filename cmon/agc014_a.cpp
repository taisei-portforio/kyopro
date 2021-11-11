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
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 1;
    while(a%2 == 0 && b%2 == 0 && c%2 == 0) {
        int tmp1 = b + c / 2;
        int tmp2 = c + a / 2;
        int tmp3 = a + b / 2;
        a = tmp1;
        b = tmp2;
        c = tmp3;
        ans++;
    }
    cout << ans << endl;
    return 0;
}