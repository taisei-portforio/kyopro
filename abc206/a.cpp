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
    int n; cin >> n;
    int nx = n * 1.08;
    if(nx < 206) {
        cout << "Yay!" << endl; 
    } else if(nx == 206) {
        cout << "so-so" << endl;
    } else {
        cout << ":(" << endl;
    }
    return 0;
}