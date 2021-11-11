#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define repd(i, n) for(int i = 0; i <= (n); ++i)
using ll = long long;
using Graph = vector<vector<int>>;
using Graphstr = vector<vector<string> >;
using Pint = pair<int, int>;
using Pstr = pair<int, string>;
using Pll = pair<long long, long long>; 
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int ctoi(char c) {
	switch (c) {
		case '0': return 0;
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
		default: return 0;
	}
}

int main() {
    string s;
    cin >> s;
    int a = ctoi(s[0]);
    int b = ctoi(s[1]);
    int c = ctoi(s[2]);
    int d = ctoi(s[3]);

    if(a+b+c+d == 7) {cout << a << '+' << b << '+' << c << '+' << d << "=7" << endl;
        return 0;
    }
    if(a+b+c-d == 7) {cout << a << '+' << b << '+' << c << '-' << d << "=7" << endl;
        return 0;
    }
    if(a+b-c+d == 7) {cout << a << '+' << b << '-' << c << '+' << d << "=7" << endl;
        return 0;
    }
    if(a-b+c+d == 7) {cout << a << '-' << b << '+' << c << '+' << d << "=7" << endl;
        return 0;
    }
    if(a-b-c+d == 7) {cout << a << '-' << b << '-' << c << '+' << d << "=7" << endl;
        return 0;
    }
    if(a+b-c-d == 7) {cout << a << '+' << b << '-' << c << '-' << d << "=7" << endl;
        return 0;
    }
    if(a-b+c-d == 7) {cout << a << '-' << b << '+' << c << '-' << d << "=7" << endl;
        return 0;
    }
    if(a-b-c-d == 7) {cout << a << '-' << b << '-' << c << '-' << d << "=7" << endl;
        return 0;
    }
}