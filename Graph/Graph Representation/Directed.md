## Add Directed

### add directed unweighted:

```cpp
void add_directed(vector<vector<int>> &v, int from, int to) {
    v[from][to] += 1;
}

int main(){
		int nodes, edges;
    cin >> nodes >> edges;
    vector<vector<int>>v(nodes, vector<int>(nodes));
    for (int e = 0; e < edges; e++) {
        int from, to;
        cin >> from >> to;
        add_directed(v, from, to);
    }
}
```

### add directed weighted:

```cpp
void add_directed_cost(vector<vector<int>> &v, int from, int to, int cost) {
    v[from][to] = cost;
}
int main(){
		int nodes, edges;
    cin >> nodes >> edges;
    vector<vector<int>>v(nodes, vector<int>(nodes));
    for (int e = 0; e < edges; e++) {
        int from, to,cost;
        cin >> from >> to,cost;
        add_directed_cost(v, from, to,cost);
    }
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