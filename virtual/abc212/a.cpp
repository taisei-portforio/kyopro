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
    int a, b;
    cin >> a >> b;
    if(a > 0 && b == 0) {
        cout << "Gold" << endl;
    }else if(a == 0 && b > 0) {
        cout << "Silver" << endl;
    }else if(a > 0 && b > 0) {
        cout << "Alloy" << endl;
    }
    return 0;
}