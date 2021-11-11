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
    int a, b;
    cin >> a >> b;

    // int tmp = 0;
    // int dice[] = {1, 2, 3, 4, 5, 6};
    // for(i == 1; i <= a; i++) {
    //     int j = 5;
    //     tmp += dice[j];
    //     if()
    // }

    if((b+a-1) / a > 6 || b / a <= 0) {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
    return 0;
}