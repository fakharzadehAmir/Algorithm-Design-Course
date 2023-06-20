# Connected Component  

Marcus has invited several of his friends to his birthday party. Some of his friends are working professionals, while others are university students, and there are also some friends who do not know each other.  

Since Marcus loves competition among his friends, he decides to divide them into groups and have a competition. The condition for team formation in this competition is that for each person in a group, there should be a familiar path to all other members of the group.  

Since the competition incurs expenses, Marcus needs to calculate the minimum number of teams that can meet the given condition.  

This problem can be transformed into a graph problem, where each of Marcus's friends is represented as a node in the graph. The acquaintances between two individuals can be represented as an edge between their respective nodes.  

Now, the minimum number of groups that can satisfy the given condition is equivalent to the number of connected components in the graph.    


### Input  
- The first line contains an integer `e`, representing the number of edges in the graph.
- The second line contains an integer `v`, representing the number of Marcus's friends.
- Then, in the next `e` lines, each line contains two integers `x` and `y`, separated by a space, indicating the existence of a directed edge from node `x` to node `y` in the graph.
### Output  
The output should be a single integer, representing the minimum number of connected components (groups) in the graph.

#### **Example**
**Input:**  
2  
4
1 2  
3 2  

**Output:**  
2