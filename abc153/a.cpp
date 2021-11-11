#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i);
using ll = long long;
 
int main() {
    int h, a;
    cin >> h >> a;
    int ans = 0;
    while(h > 0) {
        h = h - a;
        ans++;
    }
 
    cout << ans << endl;
    return 0;
}