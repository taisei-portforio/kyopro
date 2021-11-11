#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

int main(){
    stack<int> S;
    int a, b, x;
    string s;

    while(cin >> s) {
        if(s[0] == '+') {
            a = S.top(); S.pop();
            b = S.top(); S.pop();
            S.push(a + b);
        } else if(s[0] == '-') {
            a = S.top(); S.pop();
            b = S.top(); S.pop();
            S.push(a - b);
        } else if(s[0] == '*') {
            a = S.top(); S.pop();
            b = S.top(); S.pop();
            S.push(a * b);
        } else {
            S.push(atoi(s.c_str()));
        }
    }
    cout << S.top() << endl;
    return 0;
}