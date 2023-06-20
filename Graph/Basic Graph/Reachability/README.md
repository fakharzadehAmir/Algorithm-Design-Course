# Reachability  

In the country of Zampaya, the New Year has arrived, and everyone is visiting and sightseeing with each other. Ali is in city A, and his friend Reza is in city B. Ali wants to know if there is a route for him to travel to the city where his friend is located, city B, or not.

This problem can be transformed into a graph problem and modeled accordingly. We consider the entire country as a graph with v vertices and e edges, where each city is a vertex. Additionally, each route between two cities can be considered as an edge in the graph.

Now, we can represent the problem as follows: Is there at least one path between two vertices, A and B, in graph G?


### Input
The input is given in the following format:

- The first line contains two integers, `v` and `e`, separated by a space, representing the number of cities and the number of routes (roads) in the country of Zampaya.
- The second line contains two cities, `A` and `B`, separated by a space, representing the cities where Ali and Reza are located.
- Then, in the next `v` lines, the neighbors of each vertex are provided. Each line starts with an integer `k`, indicating the number of neighbors (adjacent cities) of the corresponding vertex `i`, followed by `k` integers representing the neighboring cities of vertex `i`.  
### Output
The output should be printed in a single line. If there is at least one path between the two cities `A` and `B`, print `YES`. Otherwise, print `NO`.

#### **Example**
**Input:**  
4 3  
2 4  
2 2 3  
1 1  
2 1 4  
1 3  

**Output:**  
YES