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
    // for(int i = 0; i < size-1; i++) {
    //     if(s[i] == 'h' && s[i+1] == 'i') {
    //         cout << "Yes" << endl;
    //         return 0;
    //     }
    // }
    // cout << "No" << endl;
    // return 0;

    string h = "hi";
    for(int i = 0; i <= 5; i++) {
        if(h == s) {
            cout << "Yes" << endl;
            return 0;
        }else {
            h += "hi";
        }
    }
    cout << "No" << endl;
    return 0;
}