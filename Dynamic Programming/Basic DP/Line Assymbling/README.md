# Line Assymbling

Max, while collecting beautiful stones for his collection, has spent a lot of energy and is very hungry. However, he still has a long way to go home. He has two possible paths to reach his home. In each of these two paths, Max has `n` friends who reside, and Ali can eat at their homes. Additionally, Max can switch paths between any two neighboring houses, but this consumes energy equivalent to `p` units of food.

You need to help Max maximize the amount of food he can eat on the way home while minimizing his energy consumption.

### Input Format

The input is given as follows:

- The values of `n` and `p` are provided in the first line.
- Two arrays of length `n` are given in the second and third lines, representing the amount of food available at each friend's house for each path.

### Output Format

You should output the maximum amount of food Max can eat on his way home.

### Example

**Input**  
6 2
1 2 3 4 7 1  
4 5 1 4 1 7  

**Output**  
26  

4 -> 5 -> (3 - 2) -> 4 -> 7 -> (7 - 2)
