#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    rep(i, n) cin >> h[i];

    sort(h.begin(), h.end());
    for(int i = 0; i < k; i++) {
        h.pop_back();
        if(h.size() == 0) {
            break;
        }
    }

    unsigned int ans = accumulate(h.begin(), h.end(), 0);

    cout << ans << endl;
    return 0;
}