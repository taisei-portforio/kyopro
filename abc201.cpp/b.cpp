#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    vector<int> t(n);

    rep(i, n) cin >> s[i] >> t[i];

    int tmp = 0;
    int kaisu = 0;
    int ans = 0;
    rep(i, n) {
        if(t[i] > tmp) {
            tmp = t[i];
            ans = s[i];
            kaisu++;
            if(kaisu == 3) {
                break;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
