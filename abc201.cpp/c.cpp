#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

int main(){
    string s;
    cin >> s;
    int maru = 0;
    int batu = 0;
    int hatena = 0;
    for(int i = 0; i < (int)s.size(); i++) {
        if(s[i] == 'o') {
            maru++;
        }else if(s[i] == 'x') {
            batu++;
        }else if(s[i] == '?') {
            hatena++;
        }
    }
    int mb = maru * batu;
    cout << ans << endl;
    return 0; 
}
