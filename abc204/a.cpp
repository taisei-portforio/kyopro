#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

int main(){
    char x, y;
    cin >> x >> y;
    char z;
    if(x == '0' && y == '1') {
        z = '2';
    } else if(x == '1' && y == '2') {
        z = '0';
    } else if(x == '0' && y == '2') {
        z = '1';
    } else if(x == '1' && y == '0') {
        z = '2';
    } else if(x == '2' && y == '1') {
        z = '0';
    } else if(x == '2' && y == '0') {
        z = '1';
    }
    if(x == y) {
        z = x;
    }
    cout << z << endl;
    return 0;
}
