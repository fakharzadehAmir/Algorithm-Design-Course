# Strongly Connected Component  

Maison is highly interested in collecting rumors and information from university students. Now, he wants to determine the number of student groups in the year 1401. To accomplish this, he has designed a graph where the vertices represent the students. If student `x` interacts with student `y`, there is a directed edge from the corresponding vertex of `x` to the corresponding vertex of `y`.

Maison believes that strongly connected components in this graph form the student groups. A strongly connected component in a graph is a subset of its vertices where there is at least one path from any vertex to any other vertex within the subset.

### Input  
- The first line contains two integers, `v` and `e`, separated by a space, indicating the number of vertices and edges in the graph, respectively.
- Then, in the next `e` lines, each line contains two integers `x` and `y`, separated by a space, indicating the presence of a directed edge from vertex `x` to vertex `y` in the graph.  

### Output  
The output should be a single integer representing the number of student groups (the number of strongly connected components) in the corresponding graph.  

#### **Example**
**Input:**  
4 3  
1 2  
2 3  
3 1  

**Output:**  
2