# Breadth First Search (BFS)
unlike DFS, BFS is a **level order traversal** algorithm 
that means it will iterate over all nodes in the same level before going to the next level

in BFS we use a **queue** to store the nodes that we need to visit
and need a vector to store the nodes that we already visited


## pseudo code:
BFS(node)
- pick one of it’s (node) neighbor edges
    - mark this node as **visited** 
                    visited is a very common and fundamental word in this algorithm
    - recurs DFS(neighbor)
        - do the same logic above
- pick another edge if available and it’s end hasn’t been **visited**

## Baisc BFS code:
```cpp
vector<bool> visited;
vector<vector<int>> adj;
void BFS(int node){
    queue<int> q;
    q.push(node);
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(auto child : adj[cur]){
            if(!visited[child]){
                visited[child] = true;
                q.push(child);
            }
        }
    }
}
```

## shortest path problem
given unweighted directed graph and for every node **S** list all of the nodes that are reachable 

   node **T** is reachable from node **S** if there is some path from **S** to **T**

