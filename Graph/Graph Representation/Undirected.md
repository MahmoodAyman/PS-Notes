## Undirected

### add undirected unweighted:

```cpp
void add_undirected(vector<vector<int>> &v, int from, int to) {
    v[from][to] += 1;
    v[to][from] += 1;
}

// I think now you can add main function by your self !
```

### add undirected weighted:

```cpp
void add_undirected_cost(vector<vector<int>> &v, int from, int to, int cost) {
    v[from][to] = cost;
    v[to][from] = cost;
}
```

---


### Print Graph:

```cpp
void print_graph(vector<vector<int>> &v) {
    int nodes = v.size();
    for (int i = 0; i < nodes; i++) {
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
```

---