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
    ll N, A, B;
    cin >> N >> A >> B;
    ll tot = A+B;
    ll tmp = A * (N / tot);
    ll L = N % tot;
    ll minm = min(L, A);
    ll ans = tmp + minm;
    cout << ans << endl;
    return 0;




    
    // rep(i, N) {
    //     a.push_back(A);
    //     b.push_back(B);
    //     int size = accumulate(a.begin(), a.end(), 0) + accumulate(b.begin(), b.end(), 0);
    //     if(size+tot > N) {
    //         if(size+A > N) {
    //             for(int j = size; j < N; j++) {
    //                 if(size+j >= N) {
    //                     a.push_back(j);
    //                     break;
    //                 }
    //             }
    //         }else {
    //             size += A;
    //             a.push_back(A);
    //             break;
    //         }
    //     }else {
    //         continue;
    //     }
    // }
    // int ans = accumulate(a.begin(), a.end(), 0);
    // cout << ans << endl;
    // return 0;
}
