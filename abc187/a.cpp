#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

int main(){
    string a, b;
    cin >> a >> b;

    int asum = (a[0] - '0') + (a[1] - '0') + (a[2] - '0');
    int bsum = (b[0] - '0') + (b[1] - '0') + (b[2] - '0');

    if(asum > bsum) {
        cout << asum << endl;
    } else {
        cout << bsum << endl;
    }
    return 0;
}