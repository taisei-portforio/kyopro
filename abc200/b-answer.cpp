#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    ll n;
    int k;
    cin >> n >> k;
    rep(i, k) {
        if(n%200 == 0) n /= 200;
        else n = n*1000+200;
    }
    cout << n << endl;
    return 0;
}