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
    int a, b;
    cin >> a >> b;

    // int kakaku = a / 0.08;
    // int btax = kakaku * 0.1;
    // if(btax == a) {
    //     cout << kakaku << endl;
    // }else {
    //     cout << "-1" << endl;
    // }
    for(int n = 0; n < 10000; ++n){
        int za = n*8/100;
        int zb = n*10/100;
        if(a == za && b == zb) {
            cout << n << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}