#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    string num = "200";
    for(int i = 0; i < k; i++) {
        if(n % 200 == 0) {
            n /= 200;
        }else {
            s = to_string(n);
            s.push_back(num);
            n = stoi(s);
        }
    }
    cout << n << endl;
    return 0;
}