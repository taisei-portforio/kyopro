#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<int, int>;
using Pll = pair<long long, long long>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    //入力
    string ans;
    bool flag = true; //同じ文字列があるかないかを判定するbool
    vector<string> t(n); //文字列Ｔを入れる配列
    rep(i, n) {
        t.push_back(s[i]);
        if(find(t[i].begin(), t[i].end(), '!') != t[i].end()) { //Tに入れた要素に！がついていればそれを消す、ついていなかったらつける。
            t[i].erase(0,0);
            ans = t[i];
        }else {
            ans = t[i];
            t[i] = '!' + t[i];
        }
        cout << ans << endl;
        if(find(s.begin(), s.end(), t[i]) != s.end()) {
            flag = false;
            cout << ans << endl;
            return 0;
        } 
    }
    if(flag) cout << "satisfiable" << endl;
    return 0;
}

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    
    rep(i, n) {
        reverse(s[i].begin(), s[i].end());
    }
    sort(s.begin(), s.end());
    bool flag = true;
    rep(i, n) {
        string a = s[i].substr(0, 1);
        string b = s[i+1].substr(0, 1);
        if(a == b) {
            flag = false;
            cout << a << endl;
            return 0;
        }
    }
    if(flag) cout << "satisfiable" << endl;
    return 0;
}