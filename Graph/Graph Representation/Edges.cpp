
//## Edges:
#include <bits/stdc++.h>
using namespace std;
typedef vector<pair<int,pair<int,int>>> Graph;

// another way to represent graph with edges

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
