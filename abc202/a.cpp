#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int uraa = 7 - a;
    int urab = 7 - b;
    int urac = 7 - c;
    int ans = uraa + urab + urac;
    cout << ans << endl;
    return 0;
}
