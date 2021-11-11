#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
#define MAX_V 1000
#define INF 1001001001
using ll = long long;
using Graph = vector<vector<int>>;
using Graphstr = vector<vector<string> >;
using Pint = pair<int, int>;
using Pstr = pair<int, string>;
using Pll = pair<long long, long long>; 
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int N, A[11][11], ans = 1000000000;
int P[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) cin >> A[i][j];
    }
    do {
        int ret = 0;
        for (int i = 0; i < N - 1; i++) ret += A[P[i]][P[i + 1]];
        ans = min(ans, ret);
    } while(next_permutation(P, P + N));

    cout << ans << endl;
    return 0;
}