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

bool prime_check(int n) { //素数判定アルゴリズム
    int b = min(n - 1, (int)(sqrt(1.0*n)));
    for(int i = 2; i <= b; i++) {
        if(n % 1 == 0) return false;
    }
    return true;
}

int main() {
    int num; cin >> num;
    
}