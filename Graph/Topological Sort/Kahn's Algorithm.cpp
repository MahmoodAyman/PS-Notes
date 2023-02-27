// O(n) Memory , O(E+V) for adjList time complexity 

void Topo_Sort() {
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        for (auto it: adj[i]) {
            indgree[it]++;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (!indgree[i]) {
            q.push(i);
        }
    }
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for (auto it: adj[node]) {
            if (--indgree[it] == 0)q.push(it);
        }
    }
}

int main() {
    cin >> n >> m;
    indgree.resize(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].emplace_back(v);
    }
    Topo_Sort();
    if(ans.size()==n)
        for (auto it: ans)cout << it << " ";
    else cout<<"There are a cycle\n";

}