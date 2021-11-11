#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
#define MAX_V 1000
#define INF 1001001001
using ll = long long;
using Graph = vector<vector<int>>;
using Graphstr = vector<vector<string> >;
using Pint = pair<int, int>;
using Pstr = pair<int, string>;
using Pll = pair<long long, long long>; 
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main(){
    int k, n;
    cin >> k >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    a.push_back(k+a[0]);
    int tmp = 0;
    int maxm = 0;
    rep(i, n) {
        tmp = a[i+1] - a[i];
        // if(maxm < tmp) { 
        //     maxm = tmp;
        // }
        maxm = max(maxm, tmp);
    }
    int ans = k - maxm;
    cout << ans << endl;
    return 0;
}