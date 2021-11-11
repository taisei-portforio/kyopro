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
    int k;
    string s;
    cin >> k >> s;
    string t;
    if(s.size() <= k) {
        cout << s << endl;
    }else {
        rep(i, k) {
            t += s[i];
        }
        cout << t << "... "<< endl;
    }
    return 0;
}