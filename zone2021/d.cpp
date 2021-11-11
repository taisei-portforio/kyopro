#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    string s, t;
    cin >> s;
    for(int i = 0; i < (int)s.size(); i++) {
        if(s[i] == 'R') {
            reverse(t.begin(), t.end());
        }else {
            t.push_back(s[i]);
        }
    }
    for(int i = 0; i < 114514; i++) {
        bool flag = true;
        for(int i = 0; i < (int)t.size(); i++) {
            if(t[i] == t[i + 1]) {
                t.erase(i, 2);
                flag = false;
            }
        }
        if(flag) {
            break;
        }
    }

    cout << t << endl;
    return 0;
}