# Serge Mort
Mark has recently come across an algorithm that, according to him, can reduce the execution time of the Merge Sort algorithm. However, Ali, who has extensive experience with various algorithms, believes that Mark's approach is incorrect. As a result, Mark gives Ali an array of size `n` and asks him to sort it using his method. Mark's sorting method works as follows:

1. Mark first identifies consecutive ascending subsequences in the array and writes down the length of each subsequence on paper.
2. For example, if the array is [6, 5, 4, 3, 1], there are two ascending subsequences: [5, 3, 1] and [6, 4]. Their lengths are 3 and 2, respectively. Mark writes down these two numbers on paper.
3. Mark then starts sorting the array by merging adjacent ascending subsequences using a modified Merge Sort. In other words, he merges these two subsequences into one sorted subsequence. The lengths of the subsequences are discarded after merging.
4. Mark repeats this process until all the ascending subsequences are merged into a single sorted subsequence.

However, Ali believes that Mark's method is incorrect. Therefore, he wants to put Mark to sleep by asking him for the minimum possible time to sort the array.

## Input
The input consists of two lines:

1. The first line contains two integers `n` and `k`, representing the size of the array and the number of ascending subsequences written by Mark, respectively.
2. The second line contains `k` integers, representing the lengths of the ascending subsequences written by Mark.

It is guaranteed that the sum of the lengths of the ascending subsequences is equal to `n`, and all the numbers are natural numbers between 1 and `n`.

**Constraints:**
- 1 ≤ n ≤ 10<sup>9</sup>
- 1 ≤ k ≤ 100  

## Output

Provide the minimum time required to sort the array in a single output line.

**Example:**

**Input:**  
10 3  
1 3 6  

**Output:**  
14  


*Explanation:*  
The optimal approach is to merge the first two parts together, resulting in a cost of 4. Then, merge the remaining two parts together, resulting in a cost of 10. The total cost is 14.


