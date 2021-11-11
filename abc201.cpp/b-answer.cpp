#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

int main(){
    int n;
    cin >> n;
    vector<pair<int, string>> a(n);
    rep(i, n) cin >> a[i].second >> a[i].first;
    sort(a.rbegin(), a.rend());
    cout << a[1].second << endl;
    return 0;
}
