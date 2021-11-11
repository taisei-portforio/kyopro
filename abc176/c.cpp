#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i]; //入力
    
    int tmp = 0;
    int ans = 0;

    rep(i, n) {
        if(a[i] > a[i + 1]) {
            tmp += a[i] - a[i + 1];
            ans += tmp;
            a[i + 1] += tmp;
        }
    }
    cout << ans << endl;
    return 0;
}