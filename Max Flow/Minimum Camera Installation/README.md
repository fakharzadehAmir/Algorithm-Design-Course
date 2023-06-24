# Minimum Camera Installation  
The police department intends to install surveillance cameras on the roads due to an increase in accident rates. To tackle the issue, they plan to install speed control cameras on the highways. Considering the high statistics on the London to Liverpool route, this route has been prioritized. The police department aims to place hidden cameras on the middle of the roads (all roads are two-way) to ensure that every car traveling from London to Liverpool (or vice versa) passes at least one camera.

To minimize the installation costs for the cameras, the police department wants to determine the minimum number of cameras required and the specific roads where the cameras should be installed. It is important to note that the number of cameras needed should consider the number of traffic lanes (or road capacity) on each road.


### Input
The input consists of the following:  
- The number of vertices (n) in the graph.  
- The origin vertex (London).  
- The destination vertex (Liverpool).  
- A series of lines, each representing an edge (road) in the graph. The input ends when the user enters -1.  


### Output  
The output should provide the list of roads where cameras should be installed. Each road should be listed on a separate line.  

### **Example**  

**Input:**  
5  
0  
4 
0 2 5  
0 3 3  
2 3 3  
2 1 3  
2 4 3  
3 1 5  
1 4 4  
2 4 3  
-1  

**Output:**  
4 - 1  
2 - 4  