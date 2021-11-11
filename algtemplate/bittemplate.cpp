#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

// bit全探索のテンプレ関数
vector<int> integertovec(int bit, int n) {
    vector<int> s;
    for(int i = 0; i < n; i++) {
        if(bit & (1 << i)) {
            s.push_back(i);
        }
    }
    return s;
}

int main() {
    // 入力
    int N, W;
    cin >> N >> W;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];

    // bit 全探索
    bool exist = false;
    for (int bit = 0; bit < (1 << N); ++bit) {
        // どれを選ぶか
        vector<int> S = IntegerToVector(bit, N);

        // 部分集合に対応する総和
        int sum = 0;
        for (int i : S) sum += a[i];

        // 判定
        if (sum == W) exist = true;
    }

    if (exist) cout << "Yes" << endl;
    else cout << "No" << endl;
}