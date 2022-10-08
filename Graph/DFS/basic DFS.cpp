#include <bits/stdc++.h>
using namespace std;
class Graph
{
    int n;
    vector<int> adj[100];
    bool visited[100]; // visited array to not visit the same node again
public:
    void add_edge(int u, int v)
    {
        adj[u].push_back(v);
        // adj[v].push_back(u);  // uncomment this line for undirected graph
    }
    void DFS(int node)
    {
        visited[node] = 1;
        for (auto &it : adj[node])
        {
            if (!visited[it])
            {
                DFS(it);
            }
        }
    }
};
int main()
{
    Graph g;
    int nodes, edges;
    cin >> nodes >> edges;
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        g.add_edge(u, v);
    }
    g.DFS(1);
}