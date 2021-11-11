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
    int n;
    cin >> n;
    vector<int> p(n), q(n);
    rep(i, n) cin >> p[i];
    rep(i, n) cin >> q[i];

    vector<int> a(n);//順列を列挙するために順列を入れる配列をとる
    rep(i,n) a[i] = i+1;// 1, 2, 3...とaに順列が入っていく

    map<vector<int>, int> mp; //mapを使うとdoが楽に書ける
    do {
        mp[a] = mp.size();//最初の要素を入れると0になり、次は1という感じで可変的に書ける。
    } while(next_permutation(a.begin(), a.end()));

    int ans = abs(mp[p] - mp[q]);
    cout << ans << endl;
}


// int main() {
//     int n;
//     cin >> n;
//     vector<int> p(n), q(n);
//     rep(i, n) cin >> p[i] >> q[i];

//     do {

//     } while (next_permutation())
// }
