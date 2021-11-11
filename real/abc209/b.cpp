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
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    vector<int> odd;
    vector<int> even;
    rep(i, n) {
        if((i+1) % 2 == 0) {
            a[i] -= 1;
            even.push_back(a[i]);
        }else {
            odd.push_back(a[i]);
        }
    }
    int odsum = accumulate(odd.begin(), odd.end(), 0);
    int evsum = accumulate(even.begin(), even.end(), 0);
    int sum = odsum + evsum;
    if(x - sum >= 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}