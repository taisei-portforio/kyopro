#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repl(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;
using Graphstr = vector<vector<string> >;
using Pint = pair<int, int>;
using Pstr = pair<int, string>;
using Pll = pair<long long, long long>; 
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main() {
    int a , b, c;
    cin >> a >> b >> c;

    if(a == b) {
        cout << c << endl;
        return 0;
    }
    if(b == c) {
        cout << a << endl;
        return 0;
    }
    if(c == a) {
        cout << b << endl;
        return 0;
    }

    cout << "0" << endl;
    return 0;
}