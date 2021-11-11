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
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    
    int avg = accumulate(a.begin(), a.end(), 0) / a.size();
    int ans = a[0];
    rep(i, n) {
        if(ans > abs(n*a[i] - n*avg)) {
            ans = abs(n*a[i] - n*avg);
        }
    }
    
    cout << ans << endl;
    return 0;
}

// repd(i, n) {
    //     if(abs(avg - a[i]) != 0) {
    //         if(a[i] < ans) {
    //             ans = a[i];
    //             flag = true;
    //         }
    //     }
    // }