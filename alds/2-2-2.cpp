#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

//NのMAX制約 
const int MAX_N = 100000; 

//入力
int N, S[MAX_N], T[MAX_N];

//仕事をソートするためのpair配列
pair<int, int> itv[MAX_N];

int main() {
    rep(i, n) {
        itv[i].first = T[i];
        itv[i].second = S[i];
    }
    sort(itv, )
}