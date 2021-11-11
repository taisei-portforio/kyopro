#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    string n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n.size(); i++) {
      sum += n[i] - '0';
    }
    sum %= 9;
    if(sum == 0){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}