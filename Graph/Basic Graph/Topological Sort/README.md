# Topological Sort  
Assume you are given a curriculum for the Computer Engineering program, which is a list of courses in this field along with their prerequisites. Your task is to suggest an order for taking the courses, considering the prerequisites, so that all courses are taken in that order.

To accomplish this, imagine a directed graph where the vertices represent the courses in the curriculum, and the edges indicate the dependencies between the courses. If course `u` is a prerequisite for course `v`, there will be a directed edge from vertex `u` to vertex `v` in the graph. In the end, you need to find the topological ordering of the graph to identify the order in which the courses should be taken, respecting the prerequisites.

### Input  
The input consists of:
- The number of edges in the graph, denoted by `e`.
- The number of vertices (nodes) in the graph, denoted by `v`.
- Next, in each of the `e` following lines, two numbers separated by a space indicate the presence of a directed edge from the vertex with the first number to the vertex with the second number.

**Note 1:** It is guaranteed that the input graph is a directed acyclic graph (DAG).

### Output
Print one of the valid topological orders of the given graph.

#### **Example**  
**Input:**  
3  
4  
1 2  
4 1  
3 1  
**Output:**  
4 3 1 2  

