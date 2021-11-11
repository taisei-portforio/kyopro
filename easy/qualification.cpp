#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
#define MAX_V 1000
#define INF 1001001001
using ll = long long;
using Graph = vector<vector<int>>;
using Graphstr = vector<vector<string> >;
using Pint = pair<int, int>;
using Pstr = pair<int, string>;
using Pll = pair<long long, long long>; 
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main(){
    int n, a, b;
    string s;
    cin >> n >> a >> b >> s;

    int yosen = a+b; //予選通過枠
    int cnt = 0;
    int kaigai = 0;
    rep(i, n) {
        if(s[i] == 'a') {
            if(cnt < yosen) {
                cnt++;
                cout << "Yes" << endl;
            }else {
                cout << "No" << endl;
            }
        }
        if(s[i] == 'b') {
            if(cnt < yosen && kaigai < b) {
                kaigai++;
                cnt++;
                cout << "Yes" << endl;
            }else {
                cout << "No" << endl;
            }
        }
        if(s[i] == 'c') {
            cout << "No" << endl;
        }
    }
    return 0;
}
