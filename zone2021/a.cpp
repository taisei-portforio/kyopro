#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    string S;
    cin >> S;
    int ans = 0;
    
    for(int i = 0; i < S.size(); i++) {
        if(S[i] == 'Z' && S[i + 1] == 'O' && S[i + 2] == 'N' && S[i + 3] == 'e') {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}