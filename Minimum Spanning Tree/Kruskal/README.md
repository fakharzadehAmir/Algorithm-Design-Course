# Kruskal  

One of the important concepts in graphs is finding the Minimum Spanning Tree (MST). MST is a connected undirected weighted graph that forms a tree by connecting all vertices of the graph with the minimum total weight possible. In other words, MST is a subset of all the graph's edges that connects all vertices together (all vertices are reachable) and has the minimum possible total weight. It has various applications, including telephone lines.

We want to implement the Kruskal algorithm to find the MST of a graph.

### Input  
In the first line, the number of vertices (𝑣) and then the number of edges (𝑒) of the graph is given.  
In the next 𝑒 lines, the graph's edges are given along with their weights in the form 𝑣<sub>𝑖</sub> 𝑣<sub>𝑗</sub> 𝑤. This means the edge 𝑗 connects vertices 𝑣<sub>𝑖</sub> and 𝑣<sub>𝑗</sub> with weight 𝑤.  

**Constraints:** 
- 𝑣 ≤ 2000   
- 𝑤 ≤ 1000   

### Output  
A graph may have multiple unique MSTs, but they all have the same total weight. You should print the total weight of the MST in the output.


### **Example**

**Input:**  
4 4  
1 2 1  
1 3 4  
3 4 2  
1 4 3  

**Output:**  
6