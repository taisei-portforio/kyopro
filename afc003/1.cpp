#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    if((b-1 - a) % 2 == 0) {
        cout << "Borys" << endl;
    } else {
        cout << "Alice" << endl;
    }
    return 0;
}

// b-aの答えを考える。二人の初期位置によって答えが決まる。