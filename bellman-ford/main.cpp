#include <bits/stdc++.h>
using namespace std;
const int maxn = 1000;

vector<tuple<int,int,int>> edges;
int n,s,dist[maxn];

int main(){
    cin >> n;
    for(int i=1; i<=n; ++i){
        int u,v,w;
        cin >> u >> v >> w;
        edges.push_back(make_tuple(u,v,w));
    }
    cin >> s;
    for(int i=1; i<=n; ++i){
        dist[i] = 999; 
    } 
    dist[s] = 0;
    for(int i=1; i<=n-1; ++i){
        for(auto e : edges){
            int u,v,w;
            tie(u,v,w) = e;
            dist[v] = min(dist[v], dist[u]+w);
        }
    }
    for(auto i : edges){
        int u,v,w;
        tie(u,v,w) = i;
        cout << v << " dist= " << dist[v] << endl;
    }
    return 0;
}
