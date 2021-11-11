#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;
using Graphstr = vector<vector<string> >;
using Pint = pair<int, int>;
using Pstr = pair<int, string>;
using Pll = pair<long long, long long>; 
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int n;
string s;
int cnt = 0;

int div(string ) {
    
    if(s[0] != s[n-1]) {
        cnt++;
        return cnt; 
    }else {
        if(n % 2 == 0) {
            n /= 2;
            string st = s.substr()
        }else {
            n = (n / 2) + 1;
        }
    }
}

int divid() {

}

int main() {    
    cin >> n >> s;

    
}
