# Depth First Search (DFS)

one of Graph algorithms and I assume you know what depth and breadth means

big picture of these algorithms is a **Graph Traversal** 

word **Traversal:** just iterate over all thing 
if you have array and you iterate over all it’s elements that means you traversing the array

**Graph Traversal:** you have a graph and you need to iterate on all of it’s nodes 

---

 
### pseudo code:

DFS(node)

- pick one of it’s (node) neighbor edges
    - mark this node as **visited** 
                    visited is a very common and fundamental word in this algorithm
    - recurs DFS(neighbor)
        - do the same logic above
- pick another edge if available and it’s end hasn’t been **visited**

---
### DFS Basic code:

```cpp
vector<bool> visited;
vector<vector<int>> adj;
void DFS(int node){
    visited[node] = true;
    for(auto child : adj[node]){
        if(!visited[child]){
            DFS(child);
        }
    }
}
```

### reachability problem

logic: give node **u** and **s** and see if there is some path between them 

 given unweighted directed graph and for every node **S** list all of the nodes that are reachable 

   node **T** is reachable from node **S** if there is some path from **S** to **T**