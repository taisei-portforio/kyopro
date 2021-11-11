#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int ans = 0;
    for(int i = 0; i < n; i++) {
        int j = n;
        if(1 <= a[i] && a[i] <= a[j] && (a[i] - a[j]) % 2 == 0) {
            ans++;
        }
        j--;
    }
    cout << ans << endl;
    return 0;
}