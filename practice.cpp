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

// string to_oct(int n) {
//     string s;
//     while(n) {
//         s = to_string(i)
//     }
// } 

// int main() {
//     string n;
//     cin >> n;

//     int ans = 0;
//     string i = 0;

// }

int main() {
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        bool ok = true;
        for(int base : {8, 10}) {
        int x = i;
        while(x > 0) {
            if(x % base == 7) ok = false;
            x /= base;
            }
        }
        if(ok) ++ans;
    }
    cout << ans << endl;
    return 0;
}