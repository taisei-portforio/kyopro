#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    int n, k, num = 1;
    cin >> n >> k;

    rep(i, n) {
        if(num*2 <= num+k) {
            num *= 2;
        }else {
            num += k;
        }
    }
    cout << num << endl;
    return 0;
}