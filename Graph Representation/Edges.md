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