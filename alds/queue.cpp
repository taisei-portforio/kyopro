#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

int main(){
    int n, q;
    cin >> n >> q;
    queue<pair<string, int>> a;
    rep(i, n) {
        cin >> a[i].first;
        cin >> a[i].second;
    }

    int time = 0;
    int ans = 0;
    while(!a.empty()) {
        if(a[0].second - q <= 0) {
            time += a[0].second;
            cout << a[0].first << " " << ans << endl;
            a.pop();
        } else {
            time += q;
            a[0].second -= q;
            int tmp = a.pop();
            a.push(tmp);
        }
    }
    return 0;
}