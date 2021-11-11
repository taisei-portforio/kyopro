#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n, x, t;
    cin >> n >> x >> t;
    int c = (n+x-1)/x;
    cout << (c*t) << endl;
    return 0;
}