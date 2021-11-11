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
    int n; cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    //累積和
    vector<int> s(n+1, 0);
    rep(i, n) s[i+1] = s[i] + a[i];
    
    //区間[left, right)の総和を求める
    int left, right;
    cin >> left >> right;
    cout << s[right] << s[left] << endl;
}