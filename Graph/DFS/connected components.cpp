// this code for a specific problem you can find it: https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/ 
// but you can use it for any problem that needs to find the connected components in a graph
#include<bits/stdc++.h>

using namespace std;
void add_edges(vector<vector<int>> &adj, int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void DFS(vector<vector<int>>&adj,vector<bool>&vis ,int u) {
    vis[u] = 1;
    for (auto &it: adj[u]) {
        if (!vis[it]) {
            DFS(adj,vis,it);
        }
    }
}
int main() {
    int n, e;
    cin >> n >> e;
    vector<vector<int>>adj(n+1);
    vector<bool>vis(n+1);
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        add_edges(adj, u, v);
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            cnt++;
            DFS(adj,vis,i);
        }
    }
    cout << cnt << endl;
}