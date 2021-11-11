#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    ll res = 0;
    for(int bit = 0; bit < (1<<(N-1)); bit++) {
        ll tmp = 0;
        for(int i = 0; i < n-1; i++) {
            tmp *= 10;
            tmp += s[i] - '0';
            if(bit & (1<<i)) res += tmp, tmp = 0;
        }
        tmp *= 10;
    } 
}