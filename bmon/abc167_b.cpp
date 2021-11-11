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
    int a, b, c, k;
    cin >> a >> b >> c >> k;
    
    int ans = 0;
    for(int i = k; i > 0 ; i--) {
        if(a > 0) {
            a--;
            ans++;
        }else if(b > 0) {
            b--;
        }else {
            c--;
            ans--;
        }
    }
    cout << ans << endl;
    return 0;
}