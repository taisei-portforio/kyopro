#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n, D, H;
    cin >> n >> D >> H;
    double ans = 0;
    rep(i, n) {
        int d, h;
        cin >> d >> h;
        double now = H - double(H-h)*D/(D-d);
        ans = max(ans, now);
    }
    printf("%.10f\n", ans);
    return 0;
}