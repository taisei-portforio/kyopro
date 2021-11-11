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
    int a, b;
    cin >> a >> b;
    string ansA, ansB;
    for(int i = 1; i <= b; i++) {
        string c = to_string(a);
        ansA += c;
    }
    for(int i = 1; i <= a; i++) {
        string d = to_string(b);
        ansB += d;
    }
    rep(i, 9) {
        if(ansA[i] < ansB[i]){
            cout << ansA << endl;
            break;
        }
        else if(ansA[i] > ansB[i]){
            cout << ansB << endl;
            break;
        }
        else{
            continue;
        }
    }
    return 0;
}