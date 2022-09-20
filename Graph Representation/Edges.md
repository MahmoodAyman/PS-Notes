## Edges:

```cpp
typedef vector<pair<int,pair<int,int>>> Graph;

void add_edges(Graph &graph,int from,int to ,int cost){
graph.push_back({cost,{from,to}});
}
void print_edges(Graph &graph){
    int edges=graph.size();
    for(int i=0;i<edges;i++){
        cout<<graph[i].second.first<<" "<<graph[i].second.second<<" "<<graph[i].first<<endl;
    }
}
```

---

### another way to represent edges

```cpp
typedef vector<vector<int>> Graph;

void add_undirected(Graph &g, int from, int to) {
    g[from].push_back(to);
    g[to].push_back(from);
}
void build_graph(Graph &g,vector<vector<int>>edges){
    for(int i=0;i<edges.size();i++){
        add_undirected(g,edges[i][0],edges[i][1]);
    }
}
void print_graph(Graph &g){
    for(int i=0;i<g.size();i++){
        cout<<i<<" : ";
        for(int j=0;j<g[i].size();j++){
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }
}
```
