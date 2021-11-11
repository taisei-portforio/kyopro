#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    string s;
    string >> s;
    int x = 0;
    for(char c : s) {
        x += (c - '0');
    }
    x %= 9;
    if(x == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}