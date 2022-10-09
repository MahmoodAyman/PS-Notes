// also called Graph Coloring

#include <bits/stdc++.h>
using namespace std;
bool there_is_conflict = 0;
void DFS(int node, vector<vector<int>> &graph, vector<int> &color, int cur_color = 1)
{
    if (color[node] == 0) // not visited yet
        color[node] = cur_color;
    else
    {
        if (color[node] != cur_color) // that means there is a conflict and the can't be Bipartitie
            there_is_conflict = 1;
        return;
    }
    for (auto neighbour : graph[node])
    {
        DFS(neighbour, graph, color, 3 - cur_color);
        // (3- cur_color) is a very nice equation to switch between colors
        // if you don't know about it
        // check it when cur_color =1 and cur_color=2
    }
}
bool isBipartite(vector<vector<int>> &graph)
{
    vector<int> colors((int)graph.size());
    for (int i = 0; i < graph.size(); i++)
    {
        if (colors[i] == 0)
        {
            DFS(i, graph, colors); // no need to pass cur_color
            if (there_is_conflict)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> adj(n);
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout << (isBipartite(adj) ? "YES The Graph Bipartitie" : "No it's not Bipartite") << endl;
}

// Koing Therom: If the graph is Bipartitie it has no odd cycles!