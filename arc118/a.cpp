#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    int t, n;
    cin >> t >> n;
    int x = 0;
    int kans = 0;
    int ans = 0;
    for(int i = 1; i < 100100101; i++) {
        x = ((100+t) / 100) * i;
        if(i != x) {
            break;
        }
    }
    ans = n*x;
    cout << ans << endl;
    return 0;
}