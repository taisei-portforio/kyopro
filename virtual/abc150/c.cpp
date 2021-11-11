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
    vector<int> p(n), q(n);
    rep(i, n) cin >> p[i];
    rep(i, n) cin >> q[i];

    vector<int> order(n);//長さnまでの順列を列挙する
    rep(i, n) order[i] = i+1;
    // int idx = 0, a = -1, b = -1;
    map<vector<int>, int> mp;
    do{
        // bool ok = true;
        // rep(i, n) {
        //     if(order[i] != p[i]) {
        //         ok = false;
        //     }
        // }
        // if(ok) a = idx;

        // ok = true;
        // rep(i, n) {
        //     if(order[i] != q[i]) {
        //         ok = false;
        //     }
        // }
        // if(ok) b = idx;
        // idx++;
        mp[order] = mp.size();
    }while(next_permutation(order.begin(), order.end()));
    
    int ans = abs(mp[p]-mp[q]);
    cout << ans << endl;
    return 0;
}