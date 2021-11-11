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

const int INF = 1000001;

int main() {
    int x;
    cin >> x;
    bool flag = true;
    for(int i = x; i < INF; i++) {
        for(int j = 2; j < i; j++) {
            flag = true;
            if(i % j == 0) {
                flag = false;
                break;
            }
        }
        if(flag) {
            cout << i << endl;
            return 0;
        }
    }
}
