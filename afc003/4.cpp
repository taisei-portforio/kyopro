#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 1; i < (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

int main(){
    string n;
    cin >> n;
    if(n[0] == n[1] && n[1] == n[2] || n[1] == n[2] && n[2] == n[3] || n[0]  == n[1] && n[1] == n[2] && n[2] == n[3]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}