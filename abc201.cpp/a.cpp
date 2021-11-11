#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;

int main(){
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    
    int a[] = {a1, a2, a3};
    sort(a, a+3);
    if(abs(a[1]-a[0]) == abs(a[2]-a[1])) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
