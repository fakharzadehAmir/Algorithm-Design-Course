# BFS

Implement Breadth-First-Search Algorithm (both recuresive and Iterative).

You are given a graph with `v` vertices (numbered from 1 to `v`) and `e` edges. Your task is to traverse the graph starting from vertex `s` using the Breadth-First Search (BFS) algorithm and print the traversed vertices in the order of traversal.  

### Input  
- In the first line, three numbers `v`, `e`, and `s` are entered separated by spaces, representing the number of vertices, the number of edges, and the starting vertex, respectively.

- Then, in the next `e` lines, each line contains two numbers v<sub>i</sub> and v<sub>j</sub> representing an edge between vertices v<sub>i</sub> and v<sub>j</sub>. (1 ≤ i, j ≤ v) 

### Output  
In the output, you should print the number of each vertex in separate lines, considering the order of the traversal.

### **Example**  
**Input:**  
10 10 1  
1 8  
1 10  
8 4  
8 7  
10 9  
4 3  
4 5  
7 6  
9 2  
9 3  

**Output:**  
1  
8  
10  
4  
7  
9  
3  
5  
6  
2  