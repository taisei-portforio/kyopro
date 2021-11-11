#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    if(n % 100 == 0) {
        ans = n / 100;
    }else {
        ans = (n/100) + 1;
    }
    cout << ans << endl;
    return 0;
}