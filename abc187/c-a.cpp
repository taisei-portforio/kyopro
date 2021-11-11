#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<int, int>;
using Pll = pair<long long, long long>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    set<string> sets;
    rep(i, n) {
        cin >> s[i];
        sets.insert(s[i]); //setに入力するときはinsert
    }
    //入力

    rep(i, n) {
        if(sets.count("!" + s[i])) {
            cout << s[i] << endl;
            return 0;
        }
    }
    cout << "satisfiable" << endl;
}