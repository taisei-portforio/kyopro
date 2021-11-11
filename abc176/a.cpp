#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n, x, t;
    cin >> n >> x >> t;
    int tmp = 0; //
    int sum = 0; // 作ったたこ焼きの数
    while(sum < n) {
        sum += x;
        tmp++;
    }

    int ans = t * tmp;

    cout << ans << endl;
    return 0; 
}