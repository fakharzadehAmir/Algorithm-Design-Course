
# Cinema

A cinema has two halls, each with a capacity of `B` people, where different movies are shown in each hall. Each person in the cinema has a bad habit when watching a movie. They prefer to watch a movie that the person sitting directly in front of them can see. By default, each person buys a ticket for the same movie unless they are given enough money to change their preference.

Each person in the queue is assigned a pocket size, denoted as `i`, where `i` is the size of the pocket of person `i`. The cinema is in need of a new manager for ticket sales in these two halls. The ticket sales should be organized in such a way that:

1. More than `B` tickets are not sold for a single hall.
2. The minimum cost is incurred for filling people's pockets.

The goal is to optimize the ticket sales to minimize the total cost.

It is guaranteed that `n` people can be distributed between the two halls in such a way that neither hall exceeds the capacity of `B` people.

## Input

The input consists of the following:

- The first line contains two integers `n` and `B`, representing the number of people in the queue and the capacity of each hall, respectively.
- The second line contains `n` integers, denoting the pocket size of each person.
i-index of array shows (a<sub>i</sub> ) pocket size of person i

**Constraints:**
- 1 ≤ n ≤ 3000
- n ≤ 2*B 
- 1 ≤ a<sub>i</sub> ≤ 10<sup>9</sup>

## Output

Print the minimum cost required to satisfy the given conditions.  

### **Example**  
**Input:**  
2 1  
1000 50  

**Output:**  
50