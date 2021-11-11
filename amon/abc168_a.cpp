#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;
using Graphstr = vector<vector<string> >;
using Pint = pair<int, int>;
using Pstr = pair<int, string>;
using Pll = pair<long long, long long>; 

int main() {
    string n;
    cin >> n;
    reverse(n.begin(), n.end());
    string ans;
    if(n[0] == '0') ans = "pon";
    if(n[0] == '1') ans = "pon";
    if(n[0] == '2') ans = "hon";
    if(n[0] == '3') ans = "bon";
    if(n[0] == '4') ans = "hon";
    if(n[0] == '5') ans = "hon";
    if(n[0] == '6') ans = "pon";
    if(n[0] == '7') ans = "hon";
    if(n[0] == '8') ans = "pon";
    if(n[0] == '9') ans = "hon";

    cout << ans << endl;
    return 0;
}