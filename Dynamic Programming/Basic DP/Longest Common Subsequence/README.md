# Longest Common Subsequence

**In this question**, you are given two arrays of numbers (a<sub>1</sub>, a<sub>2</sub>, a<sub>3</sub>, ..., a<sub>n</sub>) = A and (b<sub>1</sub>, b<sub>2</sub>, b<sub>3</sub>, ..., b<sub>m</sub>) = B. The task is to find the longest common subsequence between these two arrays.

Generally, we are looking for the largest positive integer p that satisfies the following conditions:
- 1 ≤ j<sub>1</sub> < j<sub>2</sub> < ... < j<sub>p</sub> ≤ m, 1 ≤ i<sub>1</sub> < i<sub>2</sub> < ... < i<sub>p</sub> ≤ n
- a<sub>i<sub>1</sub></sub> = b<sub>j<sub>1</sub></sub>, ...... , a<sub>i<sub>p</sub></sub> = b<sub>j<sub>p</sub></sub> 

Note: A subsequence refers to a subset of numbers that appear in the same relative order but not necessarily consecutively.

**Input:**
In the first line, the elements of array A (a<sub>i</sub> ) are given.
In the second line, the elements of array B (b<sub>i</sub> ) are given.
- 1 ≤ n, m ≤ 5000
- -10<sup>9</sup> < a<sub>i</sub>, b<sub>i</sub> < 10<sup>9</sup>

**Output:**
The length of the longest common subsequence.

**Example:**  

**Input:**  
2 7 5  
2 5  

**Output:**  
2
