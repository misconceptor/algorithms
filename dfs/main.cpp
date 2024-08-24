#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100];
bool used[100];
stack<int> q;

void dfs_recursion(int s){ //RECURSIVE APPROACH OF DFS
    if(used[s]) return;
    used[s] = true;
    cout << s << ' ';
    for(auto i : adj[s]){
        if(!used[i]) dfs_recursion(i);
    }
}
void dfs_stack(int s){  //ITERATIVE APPROACH OF DFS (USING STACK)
    q.push(s);
    while(!q.empty()){
        int a = q.top();
        q.pop();
        used[a] = true;
        cout << a << ' ';
        for(auto i : adj[a]){
            if(!used[i]) q.push(i);
        }
    }
}
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; ++i){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs_recursion(1);
    return 0;
}
