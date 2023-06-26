# Maximum Matching  

One concept in graph theory is the "maximum matching" problem, which refers to finding the largest set of edges in a graph such that no two edges share a common endpoint.  

Consider a bipartite graph, where two parts of the graph are connected by edges. The "maximum matching" is the largest set of edges (in terms of the number of edges) where no two edges have a common endpoint.


### Input  
In this problem, your task is to find the maximum matching in a bipartite graph given as input. The first line of the input gives you two numbers, m and n, which represent the number of vertices in each part of the graph, respectively. Then, in the next n lines, you receive m numbers in each line. If the j-th element in the i-th line is equal to 1, it indicates that vertex i from the first part is connected to vertex j from the second part. Essentially, you are given the adjacency matrix of this bipartite graph.


### Output  
The only output line you need to print is n lines, where the i-th number indicates which vertex from the first part is matched with vertex i. If vertex i is not part of the maximum matching, the output for the i-th number should be -1. Note that for each test case, there may be multiple possible answers, and you only need to print one of them.


### **Example**  

**Input:**  
3 4  
1 1 0 1  
0 1 0 0  
0 0 0 0  

**Output:**  
1 2 -1  