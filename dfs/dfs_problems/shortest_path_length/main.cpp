#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100];
bool used[100];
int ans = INT_MAX;

void dfs(int s, int f, int len){
    if(s==f){
        ans = min(ans,len);
        return;
    }
    used[s] = true;
    for(auto i : adj[s]){
        dfs(i,f,len+1);
    }
}
int main(){
    int n,u,v;
    cin >> n;
    for(int i=0; i<n; ++i){
        cin >> u >> v;
        adj[u].push_back(v);
    }
    dfs(1,7,0); // for example let's get the shortest length of a path from 1 to 7
    cout << ans << endl;
    return 0;
}
