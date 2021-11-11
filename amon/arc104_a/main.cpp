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
//     int n = 101;
//     rep(x, n) {
//         rep(y, n) {
//             if(x + y == a && x - y == b) {
//                 cout << x << " " << y << endl;
//                 return 0;
//             }
//         }
//         n--;
//     }
    int x = (a+b)/2, y = (a-b)/2;
    cout << x << " " << y << endl;
    return 0;
}