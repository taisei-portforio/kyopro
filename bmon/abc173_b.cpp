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
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[i];

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    rep(i, n) {
        if(s[i] == "AC") {
            a++;
        } else if(s[i] == "WA") {
            b++;
        } else if(s[i] == "TLE") {
            c++;
        } else if(s[i] == "RE") {
            d++;
        }
    }
    cout << "AC x " << a << endl;
    cout << "WA x " << b << endl;
    cout << "TLE x " << c << endl;
    cout << "RE x " << d << endl;
    return 0;
}