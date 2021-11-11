#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;
//入力
int n, k;
cin >> n >> k;
vector<int> a[n];

//iまででsumを作って、残りi以降を調べる。
bool dfs(int i, int sum) {
    //n個決め終わったら、今までの和sumがkと等しいかを返す。
    if(i == n) return sum == k;

    if(dfs(i + 1, sum)) return true;

    if(dfs(i+1, sum+a[i])) return true;

    return false;
}

int main(){
    if(dfs(0, 0)) {
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
}