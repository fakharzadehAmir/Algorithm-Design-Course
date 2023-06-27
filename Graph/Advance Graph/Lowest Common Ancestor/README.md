# Lowest Common Ancestor  

A tree is an undirected graph where every two vertices are connected by exactly one simple path. In other words, a connected graph without cycles is a tree.  

Lowest Common Ancestor (LCA) is a concept in graph theory and computer science. Given a rooted tree T with N nodes, the lowest common ancestor of two nodes v and w is defined as the lowest node in T that has both v and w as descendants (where we allow a node to be a descendant of itself).  

Your task in this problem is to find the LCA of two given nodes v and w in a given tree T.  


### Input  

The input starts with the first line containing two natural numbers, n and q, representing the number of vertices in the graph and the number of queries, respectively. The next line contains n-1 numbers, indicating the parent nodes of vertices 2 to n.   
The following q lines contain two numbers u and v in each line, representing the query nodes.  

**Constraint:**  
- 1 ≤ n, q ≤ 10<sup>5</sup>  
- 1 ≤ p[ i ] ≤ i  
- 1 ≤ u, v ≤ n

### Output  
Your program should output q lines, where each line contains the number of the node representing the LCA(u, v) query.  

### **Example**  
**Input:**  
6 4  
1 1 2 2 5  
1 5  
4 6  
5 3  
6 2  

**Output:**  
1  
2  
1  
2  