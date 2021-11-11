#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

static const int N = 1000;

int lcs(string X, string Y) {
    int c[n + 1][n + 1];
    int m = X.size();
    int n = Y.size();
    int maxl = 0;
    X = ' ' + X; //X[0] に空白を代入
    Y = ' ' + Y;
    for(int i = 0; i <= m; i++) c[i][0] = 0;
    for(int j = 0; j <= n; j++) c[0][j] = 0;

    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= m; j++) {
            if(X[i] == Y[j]) {
                c[i][j] = c[i - 1][j - 1] + 1;
            } else {
                c[i][j] = max(c[i - 1][j], c[i][j - 1]);
            }
            maxl = max(maxl, c[i][j]);
        }
    }
    return maxl;
}

int main() {
    string s1, s2;
    int n;
    cin >> n;
    rep(i, n) {
        cin >> s1 >> s2;
        cout << lcs(s1, s2) << endl;
    }
    return 0;
}