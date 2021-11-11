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
    double n;
    cin >> n;
    vector<double> v(n);
    rep(i, n) cin >> v[i];

    sort(v.begin(), v.end());
    double ans = 0;

    deque<double> t;
    rep(i, n) {
        t.push_back(v[i]);
    }
    while(t.size() != 1) {
        double tmp = (t[0]+t[1])/2;
        t.pop_front();
        t.pop_front();
        ans += tmp;
        if(t.size() == 1) {
            cout << ans << endl;
            return 0;
        }
    }
}