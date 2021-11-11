#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

int Search(int A[], int n, int key){
    int i = 0;
    A[n] = key;
    while(a[i] != key) i++;
    return i != n;
}

int main(){
    int i, n, A[10001], q, key, sum = 0;
    cin >> &n;
    rep(i, n) {
        cin >> &A[i];
    }
}