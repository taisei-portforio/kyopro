#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<int, int>;
using Pll = pair<long long, long long>;

bool done[MAX_N][MAX_U+1];//既に計算したかどうかを記録
int memo[MAX_N][MAX_U+1];//計算した値の記録

int search() {
    if(done[i][u]) { //もう計算してた？
        return memo[i][u];
    }
    int res;
    //値をresに計算...
    
    done[i][u] = true; //計算したことを記憶
    memo[i][u] = res;  //値を記憶
    return res;
}

int main() {
    //cin入力
    //doneをすべてfalseに初期化し、search(0, U)を呼ぶ。
}