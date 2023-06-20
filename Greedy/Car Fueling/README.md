Noah and Aliyah want to travel from city A to city B, which are located at a distance of `d` kilometers from each other. There are `n` fuel stations on the road between these two cities where they can refuel their car and ensure its fuel supply. Each time they refuel, they can travel a maximum distance of `m` kilometers, and after that, their car runs out of fuel. The cost of fuel for this trip is to be paid by Noah, and he wants to minimize the amount of refueling.

Help Noah find the minimum amount of refueling needed from city A to city B. In other words, the input is:

### Input  

- The first line contains the distance `d` between city A and city B.
- The second line contains the maximum distance `m` the car can travel with a full tank of fuel.
- The third line contains the number of fuel stations `n` on the route.
- The next line contains `n` numbers separated by spaces, representing the location of `i`-th fuel station (1 ≤ i ≤ 𝑛).

**Constraints:**
- 1 ≤ `d` ≤ 10<sup>5</sup>
- 1 ≤ `m` ≤ 400
- 1 ≤ `n` ≤ 300
- 0 < stop<sub>1</sub> < stop<sub>2</sub> < ... < stop<sup>n</sup> < `d`


### Output   
In a single line of output, find the minimum amount of refueling required to reach from city A to city B. In case it is not possible to reach from city A to city B considering the value of `m` and the positions of fuel stations, print -1 as the output.

***Note:*** The car's fuel tank is full at the beginning of the journey.  

### **Example**

**Input:**  
950  
400  
4  
200 375 550 750  

**Output:**  
2

