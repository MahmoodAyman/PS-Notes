// detect cycle in undirected graph using DFS 
// it's just a normal dfs and check if the node can go to visited node 
// and also not it's parent then there is a cycle 
// this will take O(n) not O(e+n)
// because in worst case after n edges we must find the cycle if it's exist 


#include<bits/stdc++.h>
using namespace std;
bool DFS(int node,vector<vector<int>>&adj,vector<bool>&vis,int parent=-1){
    vis[node] = 1;
    for(auto &neighbour:adj[node]){
        if(neighbour==parent)continue; 
        // I don't need to check parent node 
        if(vis[neighbour])
        // if visited before and it's not the paretn then there is a cycle
            return true;
        if (DFS(neighbour, adj, vis, node)) 
        // pass the new parent which is node
        // this is an important condition to stop the process once you found a tree
            return true;
    }
    return false;
}
bool is_there_acycle(vector<vector<int>>&adj,vector<bool>&vis){
    for (int i = 0; i < adj.size();i++){
        if(!vis[i]&&DFS(i,adj,vis))
            return true;
    }
    return false;
}
int main(){
    int nodes, edges;
    cin >> nodes >> edges;
    vector<vector<int>> adj(nodes);
    vector<bool> vis(nodes);
    for (int i = 0; i < edges; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout << (is_there_acycle(adj,vis) ? "YES there is a cycle" : "NO there is no cycle" )<< endl;
}