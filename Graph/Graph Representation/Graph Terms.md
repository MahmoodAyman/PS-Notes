# Graph Terminologies

### Table of Contents
- [What is a Graph?](#what-is-a-graph)
- [Graph Representation](#graph-consists-of-two-components)
- [Undirected Graph](#bi-directional-road--undirected-graph)
- [Directed Graph](#directed-graph)
- [Weighted Graph](#weighted-graph)
- [Tree](#tree) 
- [Forest](#forest)
- [Cycle](#cyclic-graph)
- [Acyclic Graph](#acyclic-graph)
- [Bipartite Graph](#bipartite-graph)

## what is a graph?

Graph is a non-linear data structure that is store the data in the from of nodes and edges connecting them

**or** Graph is a mathematical structures that describes the relationship between to objects 


### Graph consists of two components:

### Nodes:

are usually denoted by circles or ovals

### Edges:

are the connection between the nodes

### Edges can be directed or undirected… weighted or unweighted that depends on the problem
---

## Bi-directional road || undirected Graph

in **undirected graph** the edges between nodes are bidirectional (**with no direction associated with them)** 

Simply, the graph can traversed in either direction. 

the absence of arrows tells us this is an **undirected graph**

![undirected graph](https://www.researchgate.net/publication/265428782/figure/fig3/AS:669498856194058@1536632374537/An-undirected-graph-with-7-nodes-and-7-edges.png)

see the code from [here](/Graph/Graph%20Representation/Undirected.md/#add-undirected-unweighted)

## Directed Graph || one way road

this is also a set of nodes and edges connecting these nodes but this time edges having a direction associated with it.

**Edges** are usually represented by arrows pointing in the direction the graph can be traversed 

![directed graph](https://www.researchgate.net/publication/265428782/figure/fig4/AS:669498856194058@1536632374537/A-directed-graph-with-7-nodes-and-7-edges.png)

see the code from [here](/Graph/Graph%20Representation/Directed.md/#add-directed-unweighted)

## Weighted Graph

weighted graph is a special type of graphs and this is a graph which each edge is given a numerical **cost** or **weight** 

weighted graph can be **directed or undirected**

![weighted graph](https://i.stack.imgur.com/Mu6VZ.png)

see the code for [weighted undirected graph](/Graph/Graph%20Representation/Undirected.md/#add-undirected-weighted) 

and [weighted directed graph](/Graph/Graph%20Representation/Directed.md/#add-directed-weighted)

## Tree

a tree is an undirected graph in which any two nodes are connected to each other by exactly one path and there is no cycles **(acyclic)**

in other words tree consisting of **N nodes** and **N-1 edges !**

![tree](https://www.geeksforgeeks.org/wp-content/uploads/binary-tree-to-DLL.png)

## Forest

undirected, disconnected, acyclic Graph 

in other words, a disjoint collection of tree is known as forest

Each component of **forest** is a **tree** 



## Cyclic Graph

cyclic Graph that is a graph that consist a cycle 
![cyclic graph](https://www.researchgate.net/publication/321828295/figure/fig9/AS:730169878802432@1551097473022/An-example-of-cyclic-graph.png)

## Acyclic Graph

acyclic Graph that is a graph that without cycles 

### Cycle: is a complete circuit
![acyclic graph](https://hazelcast.com/wp-content/uploads/2021/12/diagram-DirectedAcrylicGraph.png)

## Bipartite graph

is a graph in which set of nodes can be divided into two independent sets and no two graph nodes within the same set are adjacent

![bipartite graph](https://upload.wikimedia.org/wikipedia/commons/thumb/b/b9/Simple_bipartite_graph%3B_two_layers.svg/640px-Simple_bipartite_graph%3B_two_layers.svg.png)