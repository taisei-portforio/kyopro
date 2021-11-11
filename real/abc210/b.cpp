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
    string s;
    cin >> n;
    cin >> s;
    rep(i, n) {
        if(s[i] == '1') {
            if(i % 2 == 0) {
                cout << "Takahashi" << endl;
            }else {
                cout << "Aoki" << endl;
            }
            return 0;
        }
    }
}