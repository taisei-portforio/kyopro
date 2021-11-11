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

#define MAX_V 1000
#define INF 10000000

struct edge {
    int from; //出発点
    int to;   //到達点
    int cost; //移動コスト
};

int main()
{
    int V; //頂点の数
    int side; //辺の数
    int S; //始点
    int G; //終点
    int d[MAX_V]; //始点から添え字の頂点に行くのにかかるコスト
    vector<edge> edges; //移動の情報を保存する

    cout << "頂点の数:";
    cin >> V;
    cout << "辺の数:";
    cin >> side;
    cout << "始点:";
    cin >> S;
    cout << "終点:";
    cin >> G;

    fill(d, d+V, INF); //すべての頂点をINFにする
    d[S] = 0; //始点を0にする

    for (int i = 0; i < side; i++) {
        struct edge add;
        cout << "出発点:";
        cin >> add.from;
        cout << "到達点:";
        cin >> add.to;
        cout << "移動コスト";
        cin >> add.cost;
        edges.push_back(add);
    }

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < (int)edges.size(); j++) {

            struct edge e = edges[j];

            if (d[e.to] > d[e.from] + e.cost) {  //移動した後のコストが小さいと、頂点のコストを更新
                d[e.to] = d[e.from] + e.cost;
                if (i == V-1) {         //頂点の数と同じ回数ループすると、負の閉路があるのでループをぬける
                    cout << "negative loop" << endl;
                    break;
                } 
            }
        }
    }

    cout << "\n頂点" << S << "から頂点" << G << "まで移動するのにかかるコストの最小は" << d[G] << endl;
}
