// customize this code and use it for any problem that needs to find the number of connected components in a graph
#include<bits/stdc++.h>

using namespace std;
int n;
vector<vector<int>>adj;
vector<bool>vis;
void DFS(int u) {
    vis[u] = 1;
    for (auto &it: adj[u]) {
        if (!vis[it]) {
            DFS(it);
        }
    }
}
int findCC(){
    int cnt=0;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            cnt++;
            DFS(i);
        }
    }
    return cnt;
}
int main() {
    int e;
    cin >> n >> e;
    adj.resize(n+1);
    vis.resize(n+1);
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int cnt = findCC();
    cout << cnt << endl;
}