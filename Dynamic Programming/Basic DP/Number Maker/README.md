# Number Maker

An array of positive numbers and a target number `target` are given. We want to find all unique combinations of numbers from the given array that can be used to obtain the target sum. The numbers in the array are unique, and we can use each number an unlimited number of times to reach the target. The permutations of these numbers create new combinations.

### Input

In the first line, the number of elements in the array is provided.

In the second line, the elements of the array are listed.

In the third line, the target value is provided.

Constraints:
- 1 ≤ arr.length ≤ 10<sup>5</sup>  

### Output

The output consists of all the unique combinations of numbers from the array that sum up to the target value. These combinations are printed. If it is not possible to obtain the target value using the elements of the array, the string "Empty" is printed.

***Example***  

**Input:**  
4  
2 4 6 8  
8  

**Output:**  
8