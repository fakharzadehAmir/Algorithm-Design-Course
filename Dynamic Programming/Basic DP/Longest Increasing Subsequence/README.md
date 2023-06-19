# Longest Increasing Subsequence

In this problem, an array of numbers (a<sub>1</sub>, a<sub>2</sub>, a<sub>3</sub>, ..., a<sub>n</sub>) is given, and we are looking for the length of the longest increasing subsequence in this array. The numbers found in this subsequence should appear in ascending order.

Note: By subsequence, we mean a subset of numbers that appear in the same relative order but are not necessarily consecutive.

### Input

The input consists of two lines:
- The first line contains an integer n, which specifies the length of the array.
- The second line contains n integers a<sub>1</sub>, a<sub>2</sub>, a<sub>3</sub>, ..., a<sub>n</sub> as the elements of the array.

Constraints:
- 1 ≤ n ≤ 10<sup>4</sup>
- 1 ≤ a<sub>i</sub> ≤ 10<sup>3</sup>

### Output

Print the length of the longest increasing subsequence.

### Example

**Input:**  
5  
3 10 2 1 20  


**Output:**  
3



***Explanation:***  The desired subsequence for this problem is (3, 10, 20) with a length of 3.


