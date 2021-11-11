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
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    // int mxm = *max_element(a.begin(), a.end());
    // int mxm2 = 0;
    // rep(i, n) {
    //     if(mxm == a[i]) {
    //         continue;
    //     }else {
    //         mxm2 = max(mxm2, a[i]);
    //     }
    // }
    // rep(i, n) {
    //     if(mxm == a[i]) {
    //         if(mxm2 == 0) {
    //             cout << mxm << endl;
    //         } else {
    //             cout << mxm2 << endl;
    //         }
    //     }
    //     else cout << mxm << endl;
    // }
    // return 0;

    // vector<int> s;

    // sort(a.begin(), a.end(), greater<int>());
    // int mxm = a[0];
    // int ans = 0;
    // rep(i, n){
    //     if(a[i] != mxm) {
    //         ans = max(a[i], mxm);
    //     }else {
    //         ans = a[i-1];
    //     }
    //     cout << ans << endl;
    // }
    // return 0;

    vector<int> lm(n);
    vector<int> rm(n);
    for(int i = 1; i < n; i++) lm[i] = max(lm[i-1], a[i-1]);
    for(int i = n-2; i >= 0; i--) rm[i] = max(rm[i+1], a[i+1]);

    rep(i, n) {
        cout << max(lm[i], rm[i]) << endl;
    }
    return 0;
}