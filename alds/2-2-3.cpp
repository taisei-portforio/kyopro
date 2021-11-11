#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<int, int>;
using Pll = pair<long long, long long>;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    
    //s[a], s[a+1]... s[b]が残っている文字列
    int a = 0, b = n-1;
    while(a <= b) {
        //左から見た場合と右から見た場合を比較
        bool left = false;
        for(int i = 0; a + i <= b; i++) {
            if(s[a+i] < s[b-i]) {
                
            }
        }
    }
}