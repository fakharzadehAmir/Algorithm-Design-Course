# DFS

Implement Depth-First-Search Algorithm (both recuresive and Iterative).

You are given a graph with `v` vertices (numbered from 1 to `v`) and `e` edges. You need to traverse the graph starting from vertex `s` and print the traversed vertices in the order of the traversal. (Note: For the neighbors of each vertex, start from the leftmost and go to the rightmost.)  

### Input  
- In the first line, two numbers `v` and `e` are entered separated by a space, representing the number of vertices and the number of edges in the graph, respectively.

- The second line contains a number `s` which indicates the starting vertex for the DFS traversal (in other words, the DFS algorithm starts by calling it on this vertex, and the root of your DFS tree is this vertex).

- Then, in the next `e` lines, each line contains two numbers v<sub>i</sub> and v<sub>j</sub> representing an edge between vertices v<sub>i</sub> and v<sub>j</sub>. (1 ≤ i, j ≤ v) 

### Output  
In the output, you should print the number of each vertex in separate lines, considering the order of the traversal.

### **Example**  
**Input:**  
4 3  
1  
1 2  
1 3  
1 4  

**Output:**  
1  
2  
3  
4  