#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<int, int>;
using Pll = pair<long long, long long>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int heap[MAX_N], sz = 0;

void push(int x) {
    //自分のノードの番号
    int i = sz++;
    while(i > 0) {
        //親のノード番号
        int p = (i - 1) / 2;
        //もう逆転していないなら抜ける
        if(heap[p] <= x) break;
        //親のノードの数字を下ろして自分は上に
        heap[i] = heap[p];
        i = p;
    }
    heap[i] = x;
}

int pop() {
    //最小値
    int ret = heap[0];
    //根に持ってくる値
    int x = heap[--sz];

    //根からおろしていく
    int i = 0;
    while(i*2 + 1 < sz) {
        int a = i*2+1, b = i*2+2;
        if(b < sz && heap[b] < heap[a])a = b;

        //もう逆転していないなら終わり
        if(heap[a] >= x) break;

        //子の数字を持ち上げる
        heap[i] = heap[a];
        i = a;
    }
    heap[i] = x;
    return ret;
}

int main() {
    //宣言
    priority_queue<int> pque;

    //  要素の追加
    pque.push(3);
    pque.push(5);
    pque.push(1);

    //空になるまでループ
    while(!pque.empty()) {
        //最大値の取得及び削除
        cout << pque.top() << endl;
        pque.pop();
    }
    return 0;/;:
}