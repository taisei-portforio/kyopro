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
    ll n, a, b;
    cin >> n >> a >> b;
    // ll nowa = a;
    // ll nowb = b;
    // ll ans = 0;
    // while(nowa != nowb) {
    //     if(a % 2 == 0 && b % 2 == 0 || a % 2 == 1 && b % 2 == 1) {
    //         nowa++;
    //         nowb--;
    //         ans++;
    //     }
    //     if(a % 2 == 0 && b % 2 == 1 || a % 2 == 1 && b % 2 == 0) {
    //         ll sa = a - 1;
    //         ll sb = n - b;
    //         if(sa <= sb) {
    //             if(nowa == 1) {
    //                 nowb--;
    //                 ans++;
    //             }else {
    //                 nowa--;
    //                 nowb--;
    //                 ans++;
    //             }
    //         }else if(sa > sb) {
    //             if(nowb == 6) {
    //                 nowa++;
    //                 ans++;
    //             }else {
    //                 nowa++;
    //                 nowb++;
    //                 ans++;
    //             }
    //         }
    //     }
    // }
    if(abs(a-b) % 2 == 0) cout << abs(a-b) / 2 << endl;
    else {
        cout << min(((a-1)+(b-1)+1)/2 , ((n-a)+(n-b)+1)/2) << endl;
    }   
    return 0;
}