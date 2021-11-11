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
    string s;
    cin >> s;
    if(s[2] == s[3] && s[4] == s[5]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}