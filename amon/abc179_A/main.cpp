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
    string s;
    cin >> s;

    // int size = s.size();
    // if(s[size-1] == 's') {
    //     s.push_back('es');
    // }else {
    //     s.push_back('s');
    // }

    reverse(s.begin(), s.end());
    if(s[0] == 's') {
        reverse(s.begin(), s.end());
        s.push_back('e');
        s.push_back('s');
    }else {
        reverse(s.begin(), s.end());
        s.push_back('s');
    }
    cout << s << endl;
    return 0;
}