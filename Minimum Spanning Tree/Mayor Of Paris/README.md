# Mayor Of Paris  

The mayor of Paris is planning to expand the city and improve its transportation system. He wants to connect all the cities within the region by constructing roads. However, he is facing a challenge in determining the minimum cost required for this project.

He has obtained a list of the distances between the cities, represented by the number of roads needed to connect them. The mayor wants to find the second smallest cost for connecting all the cities. Can you help him?  

### Input  
The first line of the input contains two numbers separated by a space: v (the number of cities) and e (the number of roads). Following that, each of the next e lines contains three numbers separated by spaces: u, v, and w. These numbers represent the cities u and v, and the cost w required to build a road between them.  
**Constraint**  
- v ≤ 500  
### Output  
If it is possible to connect all the cities and find the second smallest cost, print that cost. Otherwise, output -1.  


### **Example**  
**Input:**  
4 4  
1 2 1  
4 1 3  
2 3 1  
1 3 2   

**Output:**  
6