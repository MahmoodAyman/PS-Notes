# Breadth First Search (BFS)
unlike DFS, BFS is a **level order traversal** algorithm 
that means it will iterate over all nodes in the same level before going to the next level

in BFS we use a **queue** to store the nodes that we need to visit
and need a vector to store the nodes that we already visited


## pseudo code:
BFS(node)
- push the node to the queue
- while the queue is not empty
    - pop the first node from the queue
    - mark this node as **visited** 
    - push all of it’s neighbors to the queue if they are not visited

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


this is the code to calculate the shortest path from a node to all other nodes in the graph
```cpp
#define oo -1  // just put -1 instead of oo :"D
vector<int>BFS(vector<vector<int>>adjList,int st_node){
    vector<int> shortest_path(adjList.size(), oo);
    queue<pii> q; // nodes and it's level
    q.push({st_node, 0});
    shortest_path[st_node] = 0; // the level of start node
    while(!q.empty()){
        pii p = q.front(); // pair<int,int> p
        q.pop();
        int cur_node = p.first, cur_level = p.second;
        for(int neighbour:adjList[cur_node]){// add neighbours of nodes
            if(shortest_path[neighbour]==oo){ // never visited yet
                q.push({neighbour, cur_level + 1});
                shortest_path[neighbour] = cur_level + 1;
            }
        }
    }
    return shortest_path; // the path from st_node to the rest of nodes 
}
```
