#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 1; i < (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

int main(){
    int n;
    cin >> n;
    int maxcnt = 0;
    int cnt = 0;
    int ans = 0;

    rep(i, n) {
        while(i % 2 == 0){
            i /= 2;
            cnt++;
        }
        if(maxcnt < cnt) {
            maxcnt = cnt, ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}