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
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main() {
    int n;
    string s;
    cin >> n >> s;

    char t = 't';
    int cnt = 0;
    rep(i, n) {
        if(t != s[i]) {
            cnt++;
            t = s[i];
        }
    }
    cout << cnt << endl;
    return 0;

    // deque<char> ans;
    // ans.push_back(s[0]);
    // rep(i, n) {
    //     if(s[i] != s[i+1]) {
    //         i = i + 1;
    //         ans.push_back(s[i+1]);
    //     }
    // }

    // rep(i, ans.size()) {
    //     if(s[i])
    // }
    
    // return 0;
}
