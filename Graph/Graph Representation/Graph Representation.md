## First you can use this line to make things easy:

instead of declare vector by writing all this 

you can define your vector that will save the graph for you and use type def to assign word in my case **Graph** to it

see examples: 

```cpp
typedef vector<pair<int,pair<int,int>>> Graph; 

int main(){
	Graph g;
}
```

```cpp
typedef vector<vector<int>> Graph;  
int main(){
	Graph g;
}
```

```cpp
struct edge{
    int node;
    int cost;
};
typedef vector<vector<edge>> Graph;  
int main(){
	Graph g;
}
```

---


## Adjacency list
```cpp
vector<int>adj[100];
```

## Adjacency Matrix
```cpp
int adj[100][100];
```


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



