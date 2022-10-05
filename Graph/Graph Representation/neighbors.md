## add neighbors:

### directed unweighted:

```cpp
void add_neighbours_directed(vector<vector<int>> &v, int from, int to) {
    v[from].push_back(to); // cause at beginning each from has empty vector
}
```

### undirected unweighted:

```cpp
void add_neighbours_undirected(vector<vector<int>> &v, int from, int to) {
    v[from].push_back(to);// cause at beginning each from has empty vector
    v[to].push_back(from);
}
```

 

## in another way:

### directed & weighted :

```cpp
struct edge{
    int node;
    int cost;
};
void add_neighbours_directed(vector<vector<edge>>&graph,int from,int to,int cost){
    graph[from].push_back({to,cost}); // pass node,cost to struct
}

```

### undirected & weighted:

```cpp
struct edge{
    int node;
    int cost;
};
void add_neighbours_undirected(vector<vector<edge>>&graph,int from,int to,int cost){
    graph[from].push_back({to,cost});
    graph[to].push_back({from,cost});
}
```

### Print neighbors:

```cpp
void print_neighbours(vector<vector<int>> &v) {
    int nodes = v.size();
    for (int i = 0; i < nodes; i++) {
        cout << "node " << i << " has neighbours: ";
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << ", ";
        }
        cout << endl;
    }
}
```

---